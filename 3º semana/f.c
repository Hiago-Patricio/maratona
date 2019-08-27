#include <stdio.h>
#include <stdlib.h>

void main(){
    int N;
    scanf("%d", &N);
    int foco[N][3];
    int fotos = N;

    int i, j;

    for(i = 0; i < N-1 ; i++){ //Zerando as flags de sobreposição
        foco[i][3] = 0;
        scanf("%d %d", &foco[i][0], &foco[i][1]);
    }

    for(i = 0; i < N-1 ; i++){
        for(j = i + 1; j < N; j++){
            if ((foco[i][0] >= foco[j][0])&&(foco[i][0] < foco[j][1]) 
            ||(foco[i][0] >= foco[j][0])&&(foco[i][1] < foco[j][1])
            ||(foco[i][1] >= foco[j][0])&&(foco[i][1] < foco[j][1])) //Sobreposições
                foco[i][3]++; //Adiciona contador de Sobreposições.               
        }        
    }

    int count = 0;
    for(i = 0; i < N; i++){ //Conta as sobreposições
        count += foco[i][3];
    }

    int qtd;
    qtd = N - count;
    printf("%d\n", qtd);

}