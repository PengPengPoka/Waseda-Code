#define N 3
#define CLIENT 5

mtype = {s,r};
chan state = [CLIENT] of {mtype, int};
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
    int i;
    for(i:1..5){
        run client(i)
    }
}