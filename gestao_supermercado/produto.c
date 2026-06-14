#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#define MAX 2


void  mostarProduto(int id,char nome[50],int n_serie,float precoVenda,float precoCompra){
	printf("Novo produto registrado\n");
	printf("Id:%d\n",id);
	printf("Nome:%s\n",nome);
	printf("Numero de serie:%d\n",n_serie);
	//printf("Stoque:%d",stoque);
	printf("Preco de venda:%.2f MT\n",precoVenda);
	printf("Preco de compra:%.2f MT\n",precoCompra);

}

struct Produto {
	int id;
	char nome_produto[50];
	int n_serie;
	float preco_venda;
	float preco_compra;
};

struct Produto produtos[MAX];
int totalProdutos = 0;

void cadastrarProduto() {
	char nome[50];
	int opcao;
	

	
	while (1){
		
		if(totalProdutos >= MAX){
		printf("Sem espaco no stock..");
		return;
		}

		
		printf("1-Novo produto\n0-Sair\n");
		printf("Selecine uma opcao:");
		scanf("%d",&opcao);
		getchar();//limpa o buffer pra nao atrapalar o fgets
		
		if(opcao == 1){
				srand(time(NULL));
				int idRamdom = rand();		
				
				printf("nome do produto:");
				fgets(nome,50,stdin);
				
				//remover o "\n" do fgets
				nome[strcspn(nome,"\n")]='\0';
				
				if(strlen(nome)==0){
					printf("O campo nao pode estar vazio \n");
				}else{
					strcpy(produtos[totalProdutos].nome_produto,nome);
				}
				
				printf("Numero de serie:");
				scanf("%d",&produtos[totalProdutos].n_serie);
				
				printf("Digite o valor de compra do produto:");
				scanf("%f",&produtos[totalProdutos].preco_compra);
				
				printf("digite o preco de venda:");
				scanf("%f",&produtos[totalProdutos].preco_venda);
				
				produtos[totalProdutos].id = idRamdom;
				mostarProduto(produtos[totalProdutos].id,produtos[totalProdutos].nome_produto,produtos[totalProdutos].n_serie,produtos[totalProdutos].preco_venda,produtos[totalProdutos].preco_compra);
				
				totalProdutos++;		
						
		}else if(opcao == 0){
			printf("Saindo...\n");
			break;
		}else {
			printf("Opcao invalida\n");
		}
		
	}
	

}
/*
cadastrarProduto() 

pedir dados
    ?
validar dados
    ?
criar struct Produto
    ?
gerar ID
    ?
guardar no array/ficheiro
    ?
confirmar
*/

void listarProdutos(){
	//logica para listar produtos
	printf("nada feito ainda");
}

void buscarProduto(){
	//logica para buscar um produto
	printf("nada feito ainda");
}

void venderProduto(){
	//logica para venda de produtos(muito importante we got to be carefull)
	printf("nada feito ainda");
}
