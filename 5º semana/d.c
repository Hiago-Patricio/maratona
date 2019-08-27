#include <stdio.h>

int main(){ 
    int matrizes[100][15][150];
    int tam[100];
    int i, j, k, q, linha, coluna, cont_um, ver, soma[100];
    scanf("%d", &q);

    for(i = 0; i < q; i++){
        cont_um = 0;
        soma[i] = 0;
        scanf("%d", &tam[i]);
        for(j = 0; j < tam[i]; j++){
            for(k = 0; k < tam[i]; k++){
                scanf("%d", &matrizes[i][j][k]);
            }
        }
        for(j = 0; j < tam[i]; j++){
            for(k = 0; k < tam[i]; k++){
                ver = 0;
                if(matrizes[i][j][k] == 1){
                    cont_um++;
                    (soma[i])++;
                }else if(cont_um > 0){

                    coluna = k;
                    do{
                        if(matrizes[i][j][coluna] == 1)
                            ver++;
                    }while(linha < tam[i] && matrizes[i][j][coluna++] != 1);

                    linha = j;
                    do{
                        if(matrizes[i][linha][k] == 1)
                            ver++;
                    }while(linha < tam[i] && matrizes[i][linha++][k] != 1);

                    if(ver == 2)
                        (soma[i])++;
                }
                printf("(%d,%d) ver == %d\n", j, k, ver);
            }
        }
        printf("%d", soma[i]);
    }


    return 0;
}