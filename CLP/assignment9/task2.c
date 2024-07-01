#include <stdio.h>
int gcounter;

int c1(){
    static int count;
    gcounter++;
    return count++;
}

int c2(){
    static int count;
    gcounter++;
    return count++;
}

int main(){
    int i, s1, s2;
    for(i=0;i<5;i++)
        s1 = c1();
    for(i=0;i<10;i++)
        s2 = c2();
    
    printf("s1 = %d, s2 = %d, g = %d\n", s1, s2, gcounter);
    
    return 0;
}