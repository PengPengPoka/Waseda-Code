#define N 3

mtype = {s,r};
chan state = [N] of {mtype};

active proctype semaphore(){
    bit count = N;
    do 
    :: state ? s ->
        if 
        :: count > 0 ->
            count --;
            state ! s;
        :: else ->
            skip;
        fi;
    :: state ? r ->
        count++;
    od
}

active[5] proctype task(){
    do 
    :: state ! s ->
        printf("process %d, in critical section\n",_pid);
        atomic{
            state ! r;
        }
    od
}

init{
    run semaphore();
    run task();
}