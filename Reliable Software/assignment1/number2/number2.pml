int x=0;

active proctype P(){
    int k=1;
    int loc;

    do 
    :: atomic{
        k <= 5 ->
            loc = x;
            loc++;
            x = loc;
            k++;
    }
    od

    // for(k:1..5){
    //     loc = x;
    //     loc++;
    //     x = loc;
    // }
}

active proctype check(){
    assert(x==3 || x < 3)
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