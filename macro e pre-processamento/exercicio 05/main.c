#include <stdio.h>
#include <stdlib.h>
#define SIM 1
#define NAO 0

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int parImpar(int num){
	
	int resposta;
	
	if(num % 2 == 0){
		resposta = SIM;
	}else {
		resposta = NAO;
	}
	
	return resposta;
}

int main(void) {
	int parImpar(int num);
	
	if(parImpar(17) == SIM){
		printf("par \n");
	}else {
		
		printf("impar \n");
	}
	
	if(parImpar(20)==SIM){
		printf("par \n");
	}else{
		printf("impar \n");
	}
	
	return 0;
}
