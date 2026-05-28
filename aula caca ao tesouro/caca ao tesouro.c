#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j, y1,y2, matriz[4][4] = {0};
	int linha , coluna, chance;
	
	
	for(i = 0; i<4;i++){
		
		for( j = 0 ; j<4 ; j++){
			printf(" %d ", matriz[i][j]);
		}
		
		printf("\n");
	}
	
	srand(time(NULL));
	
	y1 = rand() % 4;
	y2 = rand() % 4;
	
	matriz[y1][y2];
	
	chance = 3;
	
	while (true){
		
		printf("Digite o numero da linha: \n");
		scanf("%d",linha);
		
		printf("digite a posicao da coluna: \n");
		scanf("%d",coluna);
		
		if(linha == y1 && coluna == y2){
			printf("ehhh acertou \n");
			break;
			
		}else{
			printf(" Errou vagabundo \n");
		}
		
		
	
	}
		
	
	
	return 0;
}
