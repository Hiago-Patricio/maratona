#include <stdio.h>

int main(){
    int n, i, input, cont = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &input);
        if(input != 1)
            cont++;
    }
    printf("%d\n", cont);
}