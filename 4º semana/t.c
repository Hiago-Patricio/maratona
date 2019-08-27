#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[31];
    int qtd;
}TItem;

typedef struct TNo{
    TItem item;
    struct TNo *pPrevious, *pPosterior;
}TNo;

int main(){
    TNo teste[10];
    printf("%p\n", &teste);
    
    
    for(int i = 0; i < 10; i++)
        printf("%p i == %d\n", &teste[i], i);



    return 0;
}