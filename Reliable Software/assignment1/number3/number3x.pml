#define CLIENTS 3
#define MAX 100

mtype = {MSG};  // Message type
chan chan12 = [1] of {int};  // Channel from P1 to P2
chan chan23 = [1] of {int};  // Channel from P2 to P3
chan chan31 = [1] of {int};  // Channel from P3 to P1
chan fi_input = [1] of {int, int, int, chan};  // Channel for input to fi process
chan fi_output = [1] of {int};  // Channel for output from fi process

int a1 = 5;
int b1;  // 0 <= b1 <= 4
int a2 = 6;
int b2;  // 0 <= b2 <= 4
int a3 = 7;
int b3;  // 0 <= b3 <= 4

int max_meeting_date = 0;

proctype Fi() {
    int ai, bi, t;
    int res;
    chan reply_chan;

    do
    :: fi_input ? ai, bi, t, reply_chan ->
        if
        :: t < bi -> res = bi;
        :: else -> res = ((t - bi + ai - 1) / ai) * ai + bi;
        fi;
        reply_chan ! res;
    od;
}

active proctype P1() {
    int d1 = 0;
    int received_d3;
    int next_d1;
    chan reply_chan = [1] of {int};  // Channel for receiving function result

    do
    :: fi_input ! a1, b1, d1, reply_chan;
       reply_chan ? next_d1;
       d1 = next_d1;
       chan12 ! d1;
       chan31 ? received_d3;
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
    int next_d2;
    chan reply_chan = [1] of {int};  // Channel for receiving function result

    do
    :: chan12 ? received_d1;
       d2 = received_d1;
       fi_input ! a2, b2, d2, reply_chan;
       reply_chan ? next_d2;
       d2 = next_d2;
       chan23 ! d2;
    od;
}

active proctype P3() {
    int d3 = 0;
    int received_d2;
    int next_d3;
    chan reply_chan = [1] of {int};  // Channel for receiving function result

    do
    :: chan23 ? received_d2;
       d3 = received_d2;
       fi_input ! a3, b3, d3, reply_chan;
       reply_chan ? next_d3;
       d3 = next_d3;
       chan31 ! d3;
    od;
}

init {
    atomic {
        b1 = 0; b2 = 0; b3 = 0;
        run Fi();
        run P1();
        run P2();
        run P3();
    }
}
