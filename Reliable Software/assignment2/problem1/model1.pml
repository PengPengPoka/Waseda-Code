init{
    bool p = false;
    do 
    :: atomic{
        p = true;
        p = false;
        break;
    }
    od
}