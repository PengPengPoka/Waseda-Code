mtype = {message};

/**
** connection -> P1-P2
** connection -> P2-P3
** connection -> P3-P1
**/ 
chan connection1 = [1] of {int};
chan connection2 = [1] of {int};
chan connection3 = [1] of {int};
chan Fi_channel = [1] of {int, int, int, chan}

int a1 = 5;
int a2 = 6;
int a3 = 7;
int b1;
int b2;
int b3;

int max_date = 0;

proctype Fi(){ 
    int ai, bi, t;
    int res;
    chan reply_channel;

    do 
    :: Fi_channel ? ai, bi, t, reply_channel->
        if 
        :: t < bi -> res = bi
        :: else -> res = ((t - bi + ai - 1) / ai) * ai + bi; 
        fi

        reply_channel ! res;
    od
}

active proctype P1(){ 
    int date1 = 0;
    int received_from3;
    int next_date1;
    chan reply_channel = [1] of {int}

    do 
    :: Fi_channel ! a1, b1, date1, reply_channel;
        reply_channel ? next_date1;
        date1 = next_date1;
        connection1 ! date1;
        connection3 ? received_from3;

        if 
        :: received_from3 > date1 -> date1 = received_from3
        :: else -> skip;
        fi;

        if 
        :: date1 > max_date -> atomic{max_date = date1;
                                     printf("max meeting date: %d\n",date1)
                                     }
        :: else -> skip;
        fi;
    od
}

active proctype P2(){ 
    int date2 = 0;
    int received_from1;
    int next_date2;
    chan reply_channel = [1] of {int};

    do 
    :: connection1 ? received_from1;
        date2 = received_from1;
        Fi_channel ! a2, b2, date2, reply_channel;
        reply_channel ? next_date2;
        date2 = next_date2;
        connection2 ! date2;
    od;
}

active proctype P3(){ 
    int date3 = 0;
    int received_from2;
    int next_date3;
    chan reply_channel = [1] of {int}

    do 
    :: connection2 ? received_from2;
        date3 = received_from2;
        Fi_channel ! a3, b3, date3, reply_channel;
        reply_channel ? next_date3;
        date3 = next_date3;
        connection3 ! date3;
    od;
}

init{
    atomic{
        b1=0; b2=0; b3=0;
        run Fi();
        run P1();
        run P2();
        run P3();
    }
}