#include <stdio.h>

int main(){
    int ano, mes, dia;
    scanf("%d", &ano);
    printf("%d ano(s)\n", ano / 365);
    ano %= 365;
    mes = ano / 30; 
    printf("%d mes(es)\n", mes);
    dia = ano % 30;
    printf("%d dia(s)\n", dia);
    return 0;
}