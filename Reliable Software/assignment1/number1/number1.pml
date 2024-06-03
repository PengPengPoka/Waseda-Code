#define FALSE 0
#define TRUE 1

int x = 10;
int y = 0;
bool execute = FALSE;

active proctype thread1(){
    do 
    :: (x!=y) -> atomic{
            x=x-1;
            y=y+1;
    }
    :: (x==y) -> break
    od

    // assert(execute == TRUE)
    execute = TRUE;
    printf("state of thread 1 %d",execute)
}

active proctype thread2(){
    do 
    :: (x==y) -> atomic{
            x=8;
            y=2;
            break;
    } (x!=y) -> skip
    od

    // assert(execute == TRUE)
    execute = TRUE;
    printf("state of thread 2 %d",execute)
}

active proctype checkState(){
	// do 
    // :: (x==8 && y==2) -> break;
    // :: (x==y && x==8 && y==2) -> break;
    // :: (x == y && x != 8 && y != 2) -> break;
    // od

    assert((x == 7 && y == 3) || (x == 10 && y == 0))
}

init{
    run thread1();
    run thread2();
	run checkState();
}