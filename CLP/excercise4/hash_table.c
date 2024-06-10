#include <stdio.h>
#include <string.h>

#define TAB_SIZE 53

typedef struct Table{
    char *name;
    struct Table *next;
} Table;

Table* tab[TAB_SIZE];

int calc_hash(char* name){
    int i, hash_val;
    hash_val = 0;
    while (*name != 0){
        hash_val += *name++;
    }
    return hash_val % TAB_SIZE;   
}

int main(void){
    char string1[10], string2[10], string3[10];

    printf("string 1: ");
    scanf("%s", string1);

    printf("string 2: ");
    scanf("%s", string2);

    printf("string 3: ");
    scanf("%s", string3);

    printf("string %s, hash value: %d\n", string1,calc_hash(string1));
    printf("string %s, hash value: %d\n", string2,calc_hash(string2));
    printf("string %s, hash value: %d", string3,calc_hash(string3));

    return 0;
}