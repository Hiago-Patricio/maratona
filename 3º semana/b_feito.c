#include <stdio.h>

void main(){
    int a, b;
    float x[] = {4,4.5,5,2,1.5};
    scanf("%d %d", &a, &b);
    printf("Total: R$ %.2f\n", b*x[a-1]);
}   