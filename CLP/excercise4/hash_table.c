#include <stdio.h>
#include <string.h>

#define TAB_SIZE 100

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

Table* lookup_table(char* name){
    Table* pe;
    for (pe=tab[calc_hash(name)]; pe!=NULL; pe=pe->next){
        if(strcmp(pe->name, name) == 0)
            return pe;
    }
}

int main(void){
    printf("%d\n", calc_hash("computer"));
    printf("%d", calc_hash("Waseda"));

    return 0;
}