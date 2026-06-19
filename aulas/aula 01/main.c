#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>




int main() {
	//tipo nome[n][j];
	
	int matriz[4][4];
	int n,j;
	

	
	/*
		{11111},{11111},{11111},{11111},{11111}
		
	
		[2] [] [] [] []
		[4] [] [] [] []
		[] [] [] [] []
		[] [] [] [] []
		[] [] [] [] [3]
			
	*/
	//percorer o vector para atribuir valores
	for(n=0;n<4;n++){
		for(j=0;j<4;j++){
			matriz[n][j]=1;
		}
		
	}
	
	//percorer vector para mostrar valores
	for(n=0;n<4;n++){
		for(j=0;j<4;j++){
			printf("                   %d                     ",matriz[n][j]);
		}
		
		printf("\n");
	}
	

	
	
	
	
	
	
	
	
	
		
	
	return 0;
	
}
