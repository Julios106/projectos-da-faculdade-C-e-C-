#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int i,j, y1,y2, matriz[4][4] = {0};
	int linha , coluna, chance , randomNumber;
	
	
	for(i = 0; i<4;i++){
		
		for( j = 0 ; j<4 ; j++){
			printf(" |%d| ", matriz[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\n");
	srand(time(NULL));
	
	y1 = rand() % 4;
	y2 = rand() % 4;
	randomNumber = rand() % 10;
	
	matriz[y1][y2] = randomNumber;
	
	
	printf("====CACA AO TESOURO==== \n");
	printf("\n");
	printf("## Encontre a posicao na matriz do valor: %d \n", matriz[y1][y2]);
	printf("## Tente acertar a linha e a coluna onde esta o numero \n");
	printf("## Tens 3 chances para achar a posicao correta \n");
	
	//printf("%d %d \n", y1,y2);
	
	chance = 3;
	
	while (chance != 0){
		
		printf("Digite o numero da linha:");
		scanf("%d", &linha);
		
		printf("digite a posicao da coluna:");
		scanf("%d", &coluna);
		
		if(linha == y1 && coluna == y2){
			printf("ehhh acertou \n");
			break;
			
		}else if( linha < y1 && coluna < y2){
			printf(" Errou vagabundo \n");
			printf(" tente posicao uma posicao mais a baixo e mais a direita\n ");
			printf(" Chances restantes: %d \n",chance-1);
		}else if(linha > y1 && coluna > y2){
			printf(" Errou vagabundo \n");
			printf(" tente a posicao mais em cima e mais esquerda");
			printf(" Chances restantes: %d \n",chance-1);
			
		}else if( linha > y1 && coluna == y2){
			printf(" Errou vagabundo \n");
			printf(" tente um pouco mais a cima \n");
			printf(" Chances restantes: %d \n",chance-1);
			
		}else if( linha < y1 && coluna == y2){
			printf(" Errou vagabundo \n");
			printf(" tente um pouco mais em baixo \n");
			printf(" Chances restantes: %d \n",chance-1);
			
		}else if(linha == y1 && coluna > y2){
			printf(" Errou vagabundo \n");
			printf(" tente mais a esquerda \n");
			printf(" Chances restantes: %d \n",chance-1);
			
		}else if(linha == y1 && coluna < y2){
			printf(" Errou vagabundo \n");
			printf(" tente mais a direita \n");
			printf(" Chances restantes: %d \n",chance-1);
			
		}else {
			printf(" Errou vagabundo \n");
			printf(" tente novamnte");
			printf(" Chances restantes: %d \n",chance-1);
		}
		
		chance--;
		
		
	
	}
	
	
	return 0;
}
