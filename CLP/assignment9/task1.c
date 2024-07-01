#include <stdio.h>

int func(int a){
    a++;
    return a;
}

int main(void){
    int t, v = 1;
    t = func(v);
    printf("%d\n", v+t);
    return 0;
}