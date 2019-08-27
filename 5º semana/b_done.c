#include <stdio.h>
#include <math.h>

int main(){
    int altura_pulo, qtd_canos;
    scanf(" %d %d", &altura_pulo, &qtd_canos);

    int canos[qtd_canos];
    int i;
    for(i = 0; i < qtd_canos; i++)
        scanf(" %d", &canos[i]);

    int verificador = 0;
    for(i = 1; i < qtd_canos; i++){
        if(abs(canos[i] - canos[i-1]) > altura_pulo){
            printf("GAME OVER\n");
            verificador = 1;
            break;
        }
    }
    if(verificador == 0)
        printf("YOU WIN\n");

}