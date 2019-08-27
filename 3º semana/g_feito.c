#include <stdio.h>

void main(){
    int a, b;
    int vet[1000][1000];
    int i, j;
    int c1, c2, c3, c4; 
    int cont1, cont2, cont3, cont4;
    
    scanf("%d %d", &a, &b);
    while(a != 0 && b !=0){
        c1 = 1, c2 = 1, c3 = 1, c4 = 1;
        for(i = 0; i < a; i++){
            cont1 = 0;
            cont2 = 0;
            for(j = 0; j < b; j++){
                scanf("%d", &vet[i][j]);
                if(vet[i][j] == 1)
                    cont1++;
                if(vet[i][j] == 1)
                    cont2++;
            }
            if(cont1 == b)
                c1 = 0;
            if(cont2 == 0)
                c4 = 0;    
        }
        //cond 2 e 3
        for(j = 0; j < b; j++){
            cont2 = 0;
            cont3 = 0;
            for(i = 0; i < a; i++){
                if(vet[i][j] == 1)
                    cont2++;
                if(vet[i][j] == 1)
                    cont3++;
            }
            if(cont2 == 0)
                c2 = 0;
            if(cont3 == a)
                c3 = 0;
        }
        printf("%d\n", c1+c2+c3+c4);
        /* printf("c %d\n",c1);
        printf("c %d\n",c2);
        printf("c %d\n",c3);
        printf("c %d\n",c4);
        for(i = 0; i < a; i++){
            for(j = 0; j < b; j++){
                printf("%d\t", vet[i][j]);
            }
            printf("\n");
        }*/
        scanf("%d %d", &a, &b);
    }

}
/*
Ninguém resolveu todos os problemas.
Todo problema foi resolvido por pelo menos uma pessoa (não necessariamente a mesma).
Não há nenhum problema resolvido por todos.
Todos resolveram ao menos um problema (não necessariamente o mesmo). */