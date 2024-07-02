init{
    bool p = false;
    do 
    :: atomic{
        p = !p;
    }   
    od
}