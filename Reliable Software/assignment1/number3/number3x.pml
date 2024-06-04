#define MAX 100

mtype = { MSG };  // Message type
chan chan12 = [1] of { int };  // Channel from P1 to P2
chan chan23 = [1] of { int };  // Channel from P2 to P3
chan chan31 = [1] of { int };  // Channel from P3 to P1

int a1 = 5;
int b1;  // 0 <= b1 <= 4
int a2 = 6;
int b2;  // 0 <= b2 <= 4
int a3 = 7;
int b3;  // 0 <= b3 <= 4

int max_meeting_date = 0;

int fi(int ai, int bi, int t) {
    if (t < bi) return bi;
    return ((t - bi + ai - 1) / ai) * ai + bi;
}

active proctype P1() {
    int d1 = 0;
    int received_d3;

    do
    :: d1 = fi(a1, b1, d1);
       chan12!d1;
       chan31?received_d3;
       if
       :: received_d3 > d1 -> d1 = received_d3;
       :: else -> skip;
       fi;
       if
       :: d1 > max_meeting_date -> atomic { max_meeting_date = d1; printf("New max meeting date: %d with b1=%d, b2=%d, b3=%d\n", d1, b1, b2, b3) }
       :: else -> skip;
       fi;
    od;
}

active proctype P2() {
    int d2 = 0;
    int received_d1;

    do
    :: chan12?d2;
       d2 = fi(a2, b2, d2);
       chan23!d2;
       chan12?d2;
       if
       :: received_d1 > d2 -> d2 = received_d1;
       :: else -> skip;
       fi;
    od;
}

active proctype P3() {
    int d3 = 0;
    int received_d2;

    do
    :: chan23?d3;
       d3 = fi(a3, b3, d3);
       chan31!d3;
       chan23?d3;
       if
       :: received_d2 > d3 -> d3 = received_d2;
       :: else -> skip;
       fi;
    od;
}

init {
    atomic {
        b1 = 0; b2 = 0; b3 = 0;
        run P1();
        run P2();
        run P3();
    }
    do
    :: (b1 < 5) -> atomic { b1 = b1 + 1 }
    :: (b2 < 5) -> atomic { b2 = b2 + 1 }
    :: (b3 < 5) -> atomic { b3 = b3 + 1 }
    :: (b1 == 5 && b2 == 5 && b3 == 5) -> break
    od;
}
