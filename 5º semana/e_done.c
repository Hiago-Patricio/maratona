#include <stdio.h>

#define maximo 100005


int main(){
    int fib[maximo];
    int fib_not;
    fib[0] = 1;
    fib[1] = 1;
    int i, j, k;
    
    scanf("%d", &k);
    for(i = 2; i <= k+5; i++)
        fib[i] = fib[i-1] + fib[i-2];
    
    int cont = 0;
    //  1 1 2 3 5
    for(i = 0; i <= k+5; i++){
        for(j = fib[i] + 1; j < fib[i+1]; j++){
            cont++;
            if(cont == k)
                break;
        }
        if(cont == k)
            break;
    }
    printf("%d\n", j);
}