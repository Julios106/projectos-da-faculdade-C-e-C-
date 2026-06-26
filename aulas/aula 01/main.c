#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>





/*
	-> como acessar um campo de vectores de struct
	al[pasicao].campo para acessar;
	al[0].nome;
	al[1].nome;
	al[2].nome;
	
	for	

*/
struct Produto {
	char nome[50];
	float preco;
	int stoque;
};

struct Produto produtos[3];

void cadastrar_produto(){
		int i;
	
	for(i=0;i<3;i++){
		
		//i=1
		printf("Nome do produto:\n");
		scanf("%s",produtos[i].nome);
		
		
		printf("Preco do produto: \n");
		scanf("%f",&produtos[i].preco);
		
		printf("Quantidade em estoque do produto:\n");
		scanf("%d",&produtos[i].stoque);
		
		system("cls");
		
		
	}
}

void mostrar_produto(struct Produto edna[] ){
	int i;
	printf("\n \n");
	for(i=0;i<3;i++){
		printf("Nome do produto: %s \n",edna[i].nome);
		printf("Preco:%.2f \n",edna[i].preco);
		printf("Estoque:%d \n",edna[i].stoque);		
	}

	
}

//[produto,produto,produto]

int main() {

	cadastrar_produto();
	mostrar_produto(produtos);
	

	
	
	return 0;
	
}
