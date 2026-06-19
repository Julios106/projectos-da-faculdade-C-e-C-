#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

/*
	tipoFuncao nomeFuncao( parametros){
		uque a funcao vai fazer
	
	}


*/


int numero;

//exemplo de funcao sem retorno e sem parametros:
void saudacao(){
	char nome[20];
	printf("Hellow word \n");
	printf("suca\n");
	
	soma(10,10,10);
};

//exemplo de funcao sem retorno com parametros:
void soma(int n1,int n2,int n3){
	int soma;
	soma = n1 + n2 + n3;
	
	printf("A soma e :%d \n",soma);
}

//exemplo de funcao com retorno com parametros:
float media(float nota1,float nota2,float nota3){
	float media;
	
	media = (nota1+nota2+nota3)/3;
	
	return media;	
	
}

//exemplo de funcao com retorno sem parametros:
float mediaFinal(){
	float media,nota1,nota2,nota3;
	nota1=10;
	nota2 = 20;
	nota3 = 17;
	
	media = (nota1+nota2+nota3)/3;
	
	return media;	
	
}


int main() {
	
	//f(x)= x + 1; parametro e x
	//chamando a funcao saudacao void e sem parametros:
	saudacao();
	
	//chamando uma funcao void com parametros:
	soma(10,20,30);
	soma(100,200,200);
	soma(3,2,1);
	
	
	printf("A sua media e %.2f \n",media(20,10,1));
	printf("A sua media final e %.2f \n",mediaFinal());

	
	return 0;
	
}
