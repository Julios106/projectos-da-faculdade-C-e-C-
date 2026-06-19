#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "produto.h"




int main() {
	int opc;
	
	carregarProdutos();
	
	while (true){
		printf("1-Cadastrar Produto\n2-Listar Produto\n3-Buscar Produto\n4-Nova Venda\n0-Sair\n");
		printf("Selecione a opcao;");
		scanf("%d",&opc);
		system("cls");
		
		if(opc == 1){
			cadastrarProduto();
		}else if(opc == 2){
			listarProdutos();
		}else if(opc == 3){
			buscarProduto();
		}else if(opc == 4){
			venderProduto();
		}else if(opc == 0){
			printf("saindo ...\n");
			break;
		}
		else {
			printf("opcao invalida\n");
		}
		
	}
	
	salvarProdutos();
	
	return 0;
}
