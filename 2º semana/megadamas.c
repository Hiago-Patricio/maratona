#include <stdio.h>
#include <stdlib.h>
//1404 no uri
int sobe_direita(int linha, int coluna, int tam_linha, int tam_coluna, int tabuleiro[][coluna]){
	int i, j;
	printf("Imprimindo tabela\n");
	for(i = 0; i < tam_linha; i++){
		for(j = 0; j < tam_coluna-1; j++){
			printf("%d ", tabuleiro[i][j]);	
		}
		printf("%d\n", tabuleiro[i][j]);
	}
	return 1;
}

void main()
{
	int linha, coluna;
	int i, j;
	printf("Dimensoes: ");
	scanf("%d %d", &linha, &coluna);
	while(linha != 0 && coluna != 0)
	{
		//leitura das posições das peças
		int tabuleiro[linha][coluna];
		for(i = 0; i < linha; i++)
		{
			for(j = 0; j < coluna; j++)
			{
				if((i + j) % 2 == 0){
					scanf("%d", &tabuleiro[i][j]);	
				}else{
					tabuleiro[i][j] = -1;
				}
			}
		}

	//	
	sobe_direita(i,j, linha, coluna, tabuleiro);		
	printf("Dimensoes: ");
	scanf("%d %d", &linha, &coluna);
	}
}