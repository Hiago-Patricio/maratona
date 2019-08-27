#include <stdio.h>
#include <stdlib.h>
//1936 no uri

int main(){
    int fatorial[8] = {1,2,6,24,120,720,5040,40320};
    int i, j;
    int n, n_aux;
    int cont = 40320, cont_aux;

    scanf("%d", &n);

    for(i = 7; i >= 1; i--){
    	cont_aux = 0;
    	n_aux = n;
    	for(j = i; j >= 0; j--){
    		while(fatorial[j] <= n_aux){
    			cont_aux++;
    			n_aux -= fatorial[j];
    		}
    	}
    	if(cont_aux < cont)
    		cont = cont_aux;
    }
    printf("%d\n", cont);
	return 0;
}