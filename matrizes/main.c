#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i,j, matriz[3][4]={0};
	
	for(i = 0; i!=3 ; i++){
		matriz[i][0]= i+1;
	}
	
	for(i=1 ; i<4 ; i++){
		
		matriz[0][i] = i+2;
	}
	
	for (i = 1; i < 3 ; i++){
		
		for(j = 0 ; j<4 ; j++){
			
			printf("%d " ,matriz[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
