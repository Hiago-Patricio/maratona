#include <stdio.h>

int main(){
    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    int matriz[linhas][colunas];
    int conf_linhas[linhas];
    int i, j, ver = 1;


    for(i = 0; i < linhas; i++)
        for(j = 0; j < colunas; j++)
            scanf("%d", &matriz[i][j]);

    for(i = 0; i < linhas; i++){
        conf_linhas[i] = colunas;
        for(j = 0; j < colunas; j++){
            if(matriz[i][j] != 0){
                conf_linhas[i] = j;
                break;
            }
        }
    }
    for(i = 0; i < linhas; i++){
        // printf("%d\n", conf_linhas[i]);
        if(i > 0 && conf_linhas[i - 1] >= conf_linhas[i] && conf_linhas[i]!=colunas){
            ver = 0;
            break;
        }
    }

    if(ver == 0)
        printf("N\n");
    else
        printf("S\n");
    
    return 0;
}