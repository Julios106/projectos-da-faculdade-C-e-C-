#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "produto.h"
#include "vendas.h"
#include "config.h"
#include "dashboard.h"

//funcao que e onde estara a interface de dashboard
void dashboard_inteface(){
	int opcs;
	
	while(1){
		printf("\n====DASHBOARD====\n \n");
		printf("1-Resumo financeiro\n2-produtos com estoque baixo\n3-Produtos Esgotados\n4-Ultimas vendas\n0-Sair\n \n");
		printf("Digite a opcao:");
		scanf("%d",&opcs);
		system("cls");
		
		if(opcs == 1){
			printf("====RESUMO FINANCEIRO===\n \n");
			resumo_financeiro();
		}else if(opcs == 2){
			estoque_baixo();
		}else if(opcs == 3){
			produtos_esgotados();
		}else if(opcs == 4){
			ultimas_vendas();
		}else if(opcs == 0){
			break;
		}else {
			printf("\n ***Opcao invalida\n");
		}
		
		
	}
}

//funcao que mostra um resumo da situacao financeira do estabelecimento 
void resumo_financeiro(){
	int i,j;
	float faturacao_total=0,lucro_total=0;
	
	//obter a fatucracao total e lucro total
	for(i=0;i<totalVendas;i++){
		faturacao_total+= vendas[i].ValorTotal;
		lucro_total+= vendas[i].lucroTotal;
	}
	
	float media_vendas = faturacao_total/totalVendas;
	
	printf("Vendas Realizadas:%d\n",totalVendas);
	printf("Faturacao Total:%.2f MT \n",faturacao_total);
	printf("Lucro Total:%.2f MT \n",lucro_total);
	printf("Media de Vendas:%.2f MT \n \n \n",media_vendas);
	
}

//produtos com stock baixo
void estoque_baixo(){
	int i;
	int encontrado = 0;
	
	printf("===ESTOQUE BAXO=== \n \n");
	printf("%-20s| %-10s| %-15s|\n", "PRODUTO", "STOCK", "PRECO COMPRA");
	printf("-------------------------------------------------\n");
	for(i=0;i<totalProdutos ; i++){
		if(produtos[i].stoque<=5){
			printf("%-20s| %-10d| %-15.2f| \n",produtos[i].nome_produto,produtos[i].stoque,produtos[i].preco_compra);
			printf("-------------------------------------------------\n");
			
			encontrado = 1;
		}
		
		
	}
	
	if(encontrado == 0){
		system("cls");
		printf("****Nenhum produto com estoque critico! Abaixo de 5\n");
	}
	
}

//produtos esgotados
void produtos_esgotados(){
	int i;
	int encontrado = 0;
	
	printf("===PRODUTOS  ESGOTADOS=== \n \n");
	printf("%-20s| %-10s| %-15s|\n", "PRODUTO", "STOCK", "PRECO COMPRA");
	printf("-------------------------------------------------\n");
	for(i=0;i<totalProdutos ; i++){
		if(produtos[i].stoque==0){
			printf("%-20s| %-10d| %-15.2f| \n",produtos[i].nome_produto,produtos[i].stoque,produtos[i].preco_compra);
			printf("-------------------------------------------------\n");
			
			encontrado = 1;
		}
		
		
	}
	
	if(encontrado == 0){
		system("cls");
		printf("****Nenhum produto com estoque 0 encontrado\n");
	}
	
}

//funcao que lista as ultimas 5 vendas feitas
void ultimas_vendas(){

    int inicio,i;

    printf("\n==== ULTIMAS VENDAS ====\n");
    
    inicio = totalVendas - 5;

    if(inicio < 0){
        inicio = 0;
    }

    for( i=inicio;i<totalVendas;i++){

        printf("\nID da venda: %d\n",vendas[i].id_venda);
        printf("Total Pago: %.2f MT\n",vendas[i].ValorTotal);
        printf("Lucro Obtido: %.2f MT\n",vendas[i].lucroTotal);

    }

}
