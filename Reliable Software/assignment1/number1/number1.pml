#define FALSE 0
#define TRUE 1

int x = 10;
int y = 0;
bool execute_t1 = FALSE;
bool execute_t2 = FALSE;

proctype thread1(){
    do 
    :: (x!=y) ->
            x=x-1;
            y=y+1;
    :: (x==y) -> break
    od

    execute_t1 = TRUE;
    printf("state of thread 1 %d\n",execute_t1)
    printf("x = %d, y = %d\n",x,y)
}

proctype thread2(){
    do 
    :: (x==y) ->
            x=8;
            y=2;
            break;
    :: (x!=y) -> skip
    od

    execute_t2 = TRUE;
    printf("state of thread 2 %d\n",execute_t2)
    printf("x = %d, y = %d\n",x,y)
}

active proctype checkState(){
	do 
    :: (x==8 && y==2) -> break;
    :: (x==y && x == 5 && y == 5) -> break;
    od

    assert((x == 8 && y == 2) || (x == 5 && y == 5))
}

init{
    run thread1();
    run thread2();
	run checkState();
}