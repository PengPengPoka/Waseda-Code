#define N 3
#define CLIENT 5

mtype = {s,r};
chan state = [0] of {mtype};
chan client_queue = [CLIENT] of {int}

proctype semaphore(){
    byte count = N;
    int procID;

    do 
    :: client_queue ? procID ->
        if 
        :: count > 0 ->
            count--;
            state ! s(procID);
        :: else -> client_queue ! procID;
        fi;
    :: state ? r(procID) -> count++;
    od
}

proctype client(int id){ 
    do 
    :: client_queue ! id;
        state ? s(id);
        printf("process %d enter critical condition\n", id);
        atomic{
            printf("process %d working in critical condition\n",id);
        }
        printf("process %d leave critical condition\n", id);
        state ! r(id);
    od
}

init{
    run semaphore();
    run client(1);
    run client(2);
    run client(3);
    run client(4);
    run client(5);
}