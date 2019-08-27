#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//strcmp("hiago", "tiago");
//return -12

typedef struct{
    char nome[31];
    int qtd;
}TItem;

typedef struct TNo{
    struct TNo *pPrevious, *pPosterior;
    TItem item;
}TNo;

TNo* inserirNo(TNo *arvore, TItem item){
    if(arvore == NULL){
        TNo *insert = (TNo*) malloc(sizeof(TNo));
        insert->item = item;
        insert->pPrevious = NULL;
        insert->pPosterior = NULL;
        arvore = insert;
    }else if(strcmp(arvore->item.nome, item.nome) > 0)
        arvore->pPrevious = inserirNo(arvore->pPrevious, item);
    else if(strcmp(arvore->item.nome, item.nome) < 0)
        arvore->pPosterior = inserirNo(arvore->pPosterior, item);
    else    
        (arvore->item.qtd)++;

    return arvore;
}

void printLast(TNo *arvore, int *cont, int qtd){
    if(*cont > qtd || arvore == NULL){
        return;
    }else{
        if(arvore->pPosterior != NULL){
            (*cont)++;
            printLast(arvore->pPosterior, cont, qtd);
            printf("%s\n", arvore->item.nome);
        }else{
            (*cont)++;
            printf("%s\n", arvore->item.nome);
        }
        
        if(arvore->pPrevious != NULL){
            printLast(arvore->pPrevious, cont, qtd);
            (*cont)++;
        }
    }
}

void printTop(TNo *arvore, int *cont, int qtd){
    if(*cont > qtd || arvore == NULL){
        return;
    }else{
        if(arvore->pPrevious != NULL){
            (*cont)++;
            printTop(arvore->pPrevious, cont, qtd);
            printf("%s\n", arvore->item.nome);
        }else{
            (*cont)++;
            printf("%s\n", arvore->item.nome);
        }
        
        if(arvore->pPosterior != NULL){
            printTop(arvore->pPosterior, cont, qtd);
            (*cont)++;
        }
    }
}

void last(TNo *arvore, int qtd){
    int *cont = (int*) malloc(sizeof(int));
    *cont = 0;
    printLast(arvore, cont, qtd);
}

void top(TNo *arvore, int qtd){
    int *cont = (int*) malloc(sizeof(int));
    *cont = 0;
    printTop(arvore, cont, qtd);
}

int main(){
    TNo *arvore = NULL;
    TItem a = {"Hiago", 0}, b = {"Hiago", 0}, c = {"Iago", 0}, d = {"Tiago", 0};
    arvore = inserirNo(arvore, a);
    arvore = inserirNo(arvore, b);
    arvore = inserirNo(arvore, c);
    arvore = inserirNo(arvore, d);

    top(arvore, 4);
    // last(arvore, 4);
    return 0;
}