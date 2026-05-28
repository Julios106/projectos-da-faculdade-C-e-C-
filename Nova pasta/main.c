#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		
	/*int soma, i,inputNumber, number[9]={10,20,30,40};
	soma = 0;	
	
	for(i = 4; i<9 ;i++){
		printf("digite um numero inteiro: \n");
		scanf("%d",&inputNumber);
		
		number[i]=inputNumber;
		
	}
	
	printf("\n"); 
	
	for(i = 0 ; i<9 ; i++){
		printf("%d \n",number[i]);
		soma += number[i];
	}
	
	printf("%d \n",soma); */
	
	
	char string1[100],string2[100];
	
	printf("Digite a primeira string \n");
	fgets(string1,100,stdin);
	
	printf("Digite a segunda string \n");
	fgets(string2,100,stdin);
	
	/*remover o /n que e o caractere enter*/
	
	string1[strcspn(string1,"\n")] = '\0';
	string2[strcspn(string2,"\n")] = '\0';
	
	int stringComparada = strcmp(string1,string2); /*retorna sempre 0 se forme iguais*/
	
	if(stringComparada == 0){
		printf("sao iguais\n");
	}else{
		
		/*vamos concatenar*/
		strcat(string1," ");
		strcat(string1,string2);
		
		int tamanho = strlen(string1);
		
		int i = 0;
		int tamanho2 = 0;
		while(string1[i] != '\0'){
			tamanho2 ++;
			i++;
			
		}
		
		printf("%s \n",string1);
		printf("otamanho da string e: %d",tamanho2);
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
