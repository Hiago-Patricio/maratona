#include <stdio.h>
#include <stdlib.h>

void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {

        for (j = 0; j < n - 1; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){

    int i,j,N,Q;
    int nums[10000];
    int consultas[65];
    int count=0, count1=0, count2;

    scanf("%d %d", &N, &Q);
    while(N != 0 && Q!= 0){
        for(i = 0; i < Q; i++){
            scanf("%d", &nums[i]);
        }

        bubble_sort(nums, N); //Ordena
         
        for(i = 0; i < N; i++){
            scanf("%d", &consultas[i]);
        }

        count++;
        printf("CASE# %d:\n", count);
        for(i = 0; i < Q; i++){
            count1=0;
            count2=0;
            for(j = 0; j < N; j++){
                count2++;
                if(consultas[i] == nums[j]){
                    printf("%d found at %d\n", consultas[i], count2);
                    count1 = 1;
                    break;
                }
            }
            if(count1 != 1){
                printf("%d not found\n", consultas[i]);
            }
        }

        scanf("%d %d", &N, &Q);
    }   
}