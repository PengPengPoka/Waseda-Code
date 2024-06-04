mtype = {message};

/**
** connection -> P1-P2
** connection -> P2-P3
** connection -> P3-P1
**/ 
chan connection1 = [1] of {int};
chan connection2 = [1] of {int};
chan connection3 = [1] of {int};

int a1 = 5;
int a2 = 6;
int a3 = 7;
int b1;
int b2;
int b3;

int max_date = 0;

inline Fi(int ai, int bi, int t, int res){
    if 
    :: t < bi -> res = bi;
    :: else -> res = ((t - bi + ai - 1) / ai) * ai + bi;
    fi
}

active proctype P1(){ 
    int date1 = 0;
    int received_from3;

    do 
    :: Fi(a1, b1, date1, );
        connection1 ! date1;
        connection3 ? received_from3;

        if 
        :: received_from3 > date1 -> date1 = received_from3;
        :: else -> skip;
        fi;
        
        if 
        :: date1 > max_date -> atomic{max_date = date1;
                                    printf("max meeting date = %d\n",date1)
                                    }
        :: else -> skip;
        fi;
    od;
}

active proctype P2(){ 
    int date2 = 0;
    int received_from1;

    do 
    :: connection1 ? date2;
        connection2 ! date2;
        connection1 ? date2;

        if 
        :: received_from1 > date2 -> date2 = received_from1;
        :: else -> skip;
        fi;
    od;
}

active proctype P3(){ 
    int date3 = 0;
    int received_from2:

    do 
    :: connection2 ? date3;
        date3 = Fi(a3,b3,date3);
        connection3 ! date3;
        connection2 ? date3;

        if 
        :: received_from2 > date3 -> date3 = received_from2;
        :: else -> skip;
        fi;
    od;
}

init{
    atomic{
        b1=0; b2=0; b3=0;
        run P1();
        run P2();
        run P3();
    }

    do 
    :: (b1 < 5) -> atomic{b1 = b1 + 1}
    :: (b2 < 5) -> atomic{b2 = b2 + 1}
    :: (b3 < 5) -> atomic{b3 = b3 + 1}
    :: (b1 == 5 && b2 == 5 && b3 == 5) -> break
    od;
}