#include <stdio.h>
#include <stdlib.h>
#define tamanho 12

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int indice ,i,vector[tamanho],dobro[tamanho];
	
	
	for (indice = 0 ; indice < tamanho ; indice++){
		vector[indice]= indice;
		dobro[indice]=indice * 2;
		
	}
	
	for (i=0;i<tamanho ; i++){
		printf("%d | %d \n",vector[i],dobro[i]);
		
	}
	return 0;
}
