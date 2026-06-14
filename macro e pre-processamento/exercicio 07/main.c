#include <stdio.h>
#include <stdlib.h>
#define QUADRADO(x) ((x)*(x))
#define TAMANHO 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int numeros[TAMANHO],quadrado[TAMANHO],i;
	
	for (i=0 ; i<TAMANHO ; i++){
		numeros[i]=i + 1;
		quadrado[i] = QUADRADO(i+1);
	}
	
	for(i = 0; i<TAMANHO ; i++){
		printf("%d | %d \n",numeros[i],quadrado[i]);
		
	}
	
	return 0;
}
