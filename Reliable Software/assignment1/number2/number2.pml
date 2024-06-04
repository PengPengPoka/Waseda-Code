int x=0;

proctype P(){
    int k;
    int loc;

    // do 
    // :: atomic{
    //     k <= 5 ->
    //         loc = x;
    //         loc++;
    //         x = loc;
    //         k++;
    // }
    // od

    for(k:1..5){
        loc = x;
        loc++;
        x = loc;

        printf("x = %d\n",x)
    }
}

proctype check(){
    assert(x == 3 || x > 3)
}

init{
    run P();
    run P();
    run P();

    do 
    :: (_nr_pr == 1) -> break;
    od

    run check();
}