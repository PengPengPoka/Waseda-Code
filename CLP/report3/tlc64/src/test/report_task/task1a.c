main(){
    int id;
    int divisor;
    int modulo;

    id = 12487;
    divisor = 3;
    modulo = id;

    while (modulo >= divisor){
        modulo = modulo - divisor;
    }
    while (modulo < 0)
    {
        modulo = modulo + divisor;
    }

    put_int(modulo);
}