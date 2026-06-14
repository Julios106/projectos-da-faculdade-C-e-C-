#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void cadastrarProduto();
void listarProdutos();
void buscarProduto();
void venderProduto();


int main() {
	int opc;
	
	while (true){
		printf("1-Cadastrar Produto\n2-Listar Produto\n3-Buscar Produto\n4-Vender Produto\n0-Sair\n");
		printf("Selecione a opcao;");
		scanf("%d",&opc);
		
		if(opc == 1){
			cadastrarProduto();
		}else if(opc == 2){
			listarProdutos();
		}else if(opc == 3){
			listarProdutos();
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
	
	return 0;
}
