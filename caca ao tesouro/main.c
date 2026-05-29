#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
	
	int i,j,x1,x2,linha,coluna,tentativas,n1;
	char vet[5][5];
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){

			vet[i][j] = '|X';			
		}
		
	}
	
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			
			printf("|%c|",vet[i][j]);			
		}
		
		printf("\n");
	}
	
	srand(time(NULL));
	
	x1 = rand() % 5;
	x2 = rand() % 5;
	vet[x1][x2] = '#';
		
	//printf("%d %d",x1,x2);
	
		printf("<<<JOGO DE CACA AO TESOURO>>> \n");
		printf("* Entre os X na matriz existe um # \n");
		printf("* Encontre a posicao onde esta escondido o %c na matriz \n",vet[x1][x2]);
		printf("* Tente adivinhar em que linha e coluna esta o %c  \n", vet[x1][x2]);
		printf("\n");
		printf("\n");
	
	tentativas = 1;
	
	while(true){
		
		
		printf("_digite a a linha onde se encontra(0 a 4): ");
		scanf("%d",&linha);
		
		printf("_digite a coluna(0 a 4): ");
		scanf("%d",&coluna);
		
		
		if(linha > 4 || linha < 0){
			 printf("posicao invalida\n");
			 
		}else if(coluna > 4 || coluna<0){
			 printf("posicao invalida\n");
			 	
		}else{
			
			if(linha == x1 && coluna == x2){
				printf("\n");
				printf("parabens tesouro encontrado. VENCEU O DESAFIO! \n");
				break;
				
			}else if(linha < x1 && coluna < x2){
				printf("posicao errada! \n");
				printf("# A posicao esta mais a baixo e a direirta! \n");
				
				
			}else if(linha > x1 && coluna >x2){
				printf("posicao errada! \n");
				printf("# A posicao esta mais a cima e a esquerda! \n");
				
			}else if(linha > x1 && coluna < x2 ){
				printf("posicao errada! \n");
				printf("# A posicao esta mais a cima e direita \n");
				
			}else if(linha < x1 && coluna > x2){
				printf("posicao errada! \n");
				printf("# A posicao esta mais abaixo e a esquerda \n");
				
			} else if( linha < x1 && coluna == x2){
				printf("posicao errada! \n");
				printf("# A posicao esta mais a baixo \n");
				
			} else if(linha > x1 && coluna == x2){
				printf("posicao errada! \n");
				printf("# A posicao esta mais em cima \n");
				
			} else if(linha == x1 && coluna < x2){
				printf("posicao errada! \n");
				printf("# A posicao esta mais a direita \n");
	
				
			} else if(linha == x1 && coluna > x2){
				printf("posicao errada! \n");
				printf("# A posicao esta mais a esquerda \n");
		
				
			} else {
				
				printf("posicao errada! \n");
				printf("-- Muito longe de acertar \n");
			}
			
			tentativas++;
			
			}			
			
			
		}


		

	printf(">>>O tesouro estava nas cordenadas [%d] e [%d] \n",x1,x2);
	printf(">>>Precisou de %d tentativas para vencer o desafio!",tentativas);
	
	
	return 0;
}


