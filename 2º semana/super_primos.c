#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//2674 no uri

int isPrimo(int n){
    if(n < 5 || n % 2 == 0 || n % 3 == 0){
        return(n == 2 || n == 3);
    }
    int i;
    int max = sqrt(n);
    for(i = 5; i <= max; i+= 6){
        if((n % i) == 0 || (n % (i+2)) == 0){
            return 0;
        }
    }
    return 1;
}

int isSuper(int n){
    int num;
    while(n != 0){
        num = n % 10;
        if(!isPrimo(num))
            return 0;
        n = n / 10; 
    }
    return 1;
}

void main(){
    int n;
    
    while(scanf("%d", &n) != EOF){
        if(!isPrimo(n)){
            printf("Nada\n");
        }else if(isSuper(n)){
            printf("Super\n");
        }else{
            printf("Primo\n");
        }
    }
}
