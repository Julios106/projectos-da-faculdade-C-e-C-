#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/*
	for-repitir um numero de vezes
	while -repete enquanto a condicao e falsa e para quando a condicao verdadeira
	
	
	for(chamaV ; condicao ; uque acontece){
	
		codigo
	}
	
	j++ -> j = j + 1;
	j+= 10; -> j = j + 10;
	
	j-- -> j = j - 1;
	j-= 10; -> j = j - 10; 
	
	
	
*/

/*

	while(condicao){
		
		uque vai repitir ate que a condicao seja verdadeira
		
	}
	
	true (1)

*/



int main() {
	
	/*
		
		if(condicao){
			codigo que sera executado	
		}
			
		if(condicao){
			codigo que sera executado se a condicao for verdadeira
		
		}else{
			
			codigo que sera executado se a condicao for falsa
		
		}
		
		
		
	*/
	
	float valor,total,desconto;
	
	//0,10
	
	valor = 6000;
	float percentagem = 0.10;
	desconto = valor * percentagem;
	printf("%.2f \n",desconto);
	
	total = valor - desconto;
	printf("%.2f",total);
	
	
	
	
	
	
	
	/*
	
	
	*/
	
	
		
		

	
	return 0;
	
}
