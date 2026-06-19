#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#define MAX 5


void  mostarProduto(int id,char nome[50],int n_serie,int stoque,float precoVenda,float precoCompra){
	printf("Id:%d\n",id);
	printf("Nome:%s\n",nome);
	printf("Numero de serie:%d\n",n_serie);
	printf("Stoque:%d\n",stoque);
	printf("Preco de venda:%.2f MT\n",precoVenda);
	printf("Preco de compra:%.2f MT\n \n",precoCompra);

}

struct Produto {
	int id;
	char nome_produto[50];
	int n_serie;
	float preco_venda;
	float preco_compra;
	int stoque;
};

struct Produto produtos[MAX];
int totalProdutos = 0;

void carregarProdutos(){
	FILE*arquivo;
	
	arquivo = fopen("produtos.dat","rb");
	
	if(arquivo == NULL){
		printf("Nenhum produto encontrado \n");
		return;
	}
	
	totalProdutos = fread(produtos,sizeof(struct Produto),MAX,arquivo);
	printf("Produt0s carregados com sucesso \n");
	printf("Total de produtos cadastrado no sistema %d \n \n",totalProdutos);
	
	fclose(arquivo);
	

		
};

void salvarProdutos(){
	FILE*arquivo;
	
	arquivo = fopen("produtos.dat","wb");
	
	fwrite(produtos,sizeof(struct Produto),totalProdutos,arquivo);
	
	fclose(arquivo);
	printf("Produts salvos com sucesso \n \n");	
	
};

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
		system("cls");
		
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
				
				printf("Stoque do produto:");
				scanf("%d",&produtos[totalProdutos].stoque);
				
				printf("Digite o valor de compra do produto:");
				scanf("%f",&produtos[totalProdutos].preco_compra);
				
				printf("digite o preco de venda:");
				scanf("%f",&produtos[totalProdutos].preco_venda);
				
				produtos[totalProdutos].id = idRamdom;
				system("cls");
				printf(">>>Novo produto registrado<<<\n");
				mostarProduto(produtos[totalProdutos].id,produtos[totalProdutos].nome_produto,produtos[totalProdutos].n_serie,produtos[totalProdutos].stoque,produtos[totalProdutos].preco_venda,produtos[totalProdutos].preco_compra);
				
				totalProdutos++;		
						
		}else if(opcao == 0){
			printf("Saindo...\n");
			break;
		}else {
			printf("Opcao invalida\n");
		}
		
	}
	

}


void listarProdutos(){
	int i;
	if(totalProdutos == 0){
		printf("## Ainda nao tem produtos\n \n");
	}else{
		printf(">>> LISTA DE PRODUTOS DO SUPERMERCADO <<< \n");
		for (i = 0;i<totalProdutos ; i++){	
		mostarProduto(produtos[i].id,produtos[i].nome_produto,produtos[i].n_serie,produtos[i].stoque,produtos[i].preco_venda,produtos[i].preco_compra);
		
	}	
		
	} 
}

void buscarProduto(){
	
	int opc,idNumber,n_serie,i;
	char nome[50];
	int encontrado = false;
	
	while(1){
		printf(">>>Escolha a opcao para o metodo de busca \n");
		printf("1-Id do produto\n2-Numero de serie\n3-Nome do produto\n0-Sair\n");
		printf("Opcao:");
		scanf("%d",&opc);
		system("cls");
		getchar();
		
		if(opc == 0){
			break;
		}else if(opc == 1){
			printf("Digite o id do produto:");
			scanf("%d",&idNumber);
			
			for(i=0 ; i<totalProdutos ; i++){
				if(produtos[i].id == idNumber){
					printf(">>>Produto Encontrado \n");
					mostarProduto(produtos[i].id,produtos[i].nome_produto,produtos[i].n_serie,produtos[i].stoque,produtos[i].preco_venda,produtos[i].preco_compra);
					return encontrado = true;
				}
			}
			
			printf(">>>Produto nao Encontrado \n");
			
		}else if(opc == 2){
			printf("Digite o numero de serie do produto:");
			scanf("%d",&n_serie);
			for(i=0 ; i<totalProdutos ; i++){
				if(produtos[i].n_serie== n_serie){
					printf(">>>Produto Encontrado \n");
					mostarProduto(produtos[i].id,produtos[i].nome_produto,produtos[i].n_serie,produtos[i].stoque,produtos[i].preco_venda,produtos[i].preco_compra);
					return encontrado = true;
				}
			}
			
			printf(">>>Produto nao Encontrado \n");	
		}else if(opc == 3){
			printf("Escreva o nome do produto:");
			fgets(nome,50,stdin);
			nome[strcspn(nome,"\n")]='\0';
			for(i=0 ; i<totalProdutos ; i++){
				int comparacao = strcmp(produtos[i].nome_produto,nome); //se for igual retorna 0
				
				if(comparacao == 0){
					printf(">>>Produto Encontrado \n");
					mostarProduto(produtos[i].id,produtos[i].nome_produto,produtos[i].n_serie,produtos[i].stoque,produtos[i].preco_venda,produtos[i].preco_compra);
					return encontrado = true;
				}
			}
			printf(">>>Produto nao Encontrado \n");			
			
		}
	}
	
}

void venderProduto(){
	//logica para venda de produtos(muito importante we got to be carefull)
	printf("nada feito ainda\n"); 
}
