#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// uri 1260
typedef struct{
    char nome[31];
    int qtd;
}TItem;

typedef struct TNo{
    struct TNo *pPrevious, *pPosterior;
    TItem item;
}TNo;

TNo* insertTree(TNo* arvore, char linha[31]){
    if(arvore == NULL){
        TNo* insert = (TNo*) malloc(sizeof(TNo));
        insert->pPosterior = NULL;
        insert->pPrevious = NULL;
        strcpy(insert->item.nome, linha);
        insert->item.qtd = 0;
        arvore = insert;
    }else if(strcmp(arvore->pPosterior->item.nome, linha) == 1)
        arvore->pPosterior = insertTree(arvore->pPosterior, linha);
    else if(strcmp(arvore->pPosterior->item.nome, linha) == -1)
        arvore->pPrevious = insertTree(arvore->pPrevious, linha);
    else
        (arvore->item.qtd)++;
    return arvore;
}

int main(){
    int qtd = 2;
    // scanf(" %d\n", &qtd);
    
    TNo vetor_arvore[qtd];
    
    &vetor_arvore = NULL;
    // vetor_arvore[0] = NULL;
    // vetor_arvore[1] = NULL;
    printf("%p\n", &vetor_arvore[0]);
    printf("%p\n", &vetor_arvore[1]);

    // int arvore = 0;
    // char linha[31];
    // fgets(linha, 30, stdin);
    // while(fgets(linha, 30, stdin) != NULL){
    //     if(strcmp(linha, "\n") == 0){
    //         arvore++;
    //         printf("Check 1: %d\n", arvore);
    //     }
    //     else{
    //         printf("Check 2: %d\n", arvore);
    //         vetor_arvore[arvore] = insertTree(&vetor_arvore[arvore], linha);
    //     }
    // }

    // printf("%d\n", vetor_arvore[0].item.qtd);

    return 0;
}