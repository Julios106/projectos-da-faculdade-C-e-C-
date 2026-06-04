#include <stdio.h>
#include <stdlib.h>



int main() {
	
	
	/*operadores aritimetrico
	-soma +
	-subtracao -
	-munltiplicacao *
	-divisao /
	-resto %
	-igual ==
	-diferente !=
	*/
	
	/* operadores logicos
	- e &&
	- ou ||
		**boleanos
			true (1)
			false
	
	*/
	
	/* um programa que pede 3 nota do aluno e calcule a media*/
	
	float nota1 , nota2,nota3,media;
	

	printf("digite a primeira nota 1\n");
	scanf("%f",&nota1);
	
	printf("digite a primeira nota 2\n");
	scanf("%f",&nota2);
	
	printf("digite a primeira nota 3\n");
	scanf("%f",&nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	printf(" a sua media e:%.2f \n",media);

	
	
	return 0;
}
