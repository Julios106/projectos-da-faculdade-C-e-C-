#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
	
	int i,j,x1,x2,linha,coluna,tentativa,n1,vet[4][4]={0};
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){

			printf("|%d|",vet[i][j]);			
		}
		
		printf("\n");
	}
	
	srand(time(NULL));
	
	x1 = rand() % 4;
	x2 = rand() % 4;
	n1 = rand() % 10;
	vet[x1][x2] = n1;
		
	printf("%d %d",x1,x2);
	
		printf("JOGO DE CACA AO TESOURO \n");
		printf("* Encontre a posicao onde esta o numero %d na matriz \n",vet[x1][x2]);
		printf("* Tente adivinhar em que linha e coluna esta o numero %d \n", vet[x1][x2]);
		printf("* Tens 3 tentativas possiveis \n");
	
	tentativa = 3;
	
	while(tentativa > 0){
		
		
		printf("digite a a linha onde se encontra: ");
		scanf("%d",&linha);
		
		printf("digite a coluna: ");
		scanf("%d",&coluna);
		
		if(linha == x1 && coluna == x2){
			printf("parabens tesouro encontrado. VENCEU O DESAFIO!");
			break;
			
		}else if(linha < x1 && coluna < x2){
			printf("posicao errada! \n");
			printf("# A posicao esta mais a baixo e a direirta! \n");
			printf("** Tentativa restante: %d \n",tentativa -1);
			
			
		}else if(linha > x1 && coluna >x2){
			printf("posicao errada! \n");
			printf("# A posicao esta mais a cima e a esquerda! \n");
			printf("** Tentativa restante: %d \n",tentativa-1);
			
		}else if(linha > x1 && coluna < x2 ){
			printf("posicao errada! \n");
			printf("# A posicao esta mais a cima e direita \n");
			printf("** Tentativa restante: %d \n",tentativa-1);
			
		}else if(linha < x1 && coluna > x2){
			printf("posicao errada! \n");
			printf("# A posicao esta mais abaixo e a esquerda \n");
			printf("** Tentativa restante: %d \n",tentativa-1);
			
		} else if( linha < x1 && coluna == x2){
			printf("posicao errada! \n");
			printf("# A posicao esta mais a baixo \n");
			printf("** Tentativa restante: %d \n",tentativa-1);
			
		} else if(linha > x1 && coluna == x2){
			printf("posicao errada! \n");
			printf("# A posicao esta mais em cima \n");
			printf("** Tentativa restante: %d \n",tentativa-1);
			
		} else if(linha == x1 && coluna < x2){
			printf("posicao errada! \n");
			printf("# A posicao esta mais a direita \n");
			printf("** Tentativa restante: %d \n",tentativa-1);
			
		} else if(linha == x1 && coluna > x2){
			printf("posicao errada! \n");
			printf("# A posicao esta mais a esquerda \n");
			printf("** Tentativa restante: %d \n",tentativa-1);
			
		} else {
			
			printf("posicao errada! \n");
			printf("-- Muito longe de acertar \n");
			printf("** Tentativa restante: %d \n",tentativa-1);
		}
		tentativa--;
		
		
	}
	
	
	
	
	
	
	
	
	return 0;
}


