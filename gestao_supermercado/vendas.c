#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "produto.h"
#include "config.h"


struct itemVenda{
	int id_produto;
	char nome_Produto[50];
	int quantidade;
	float valorUitario;
};

struct Venda {
	int id_venda;
	struct itemVenda itens[MAX_ITENS_VENDAS];
	int totalItens;
	float ValorTotal;
	float lucroTotal;
	
};

struct Venda vendas[MAX_VENDAS];
int totalVendas = 0;

void carregarVendas(){
	FILE*arquivo;
	
	arquivo = fopen("vendas.dat","rb");
	
	if(arquivo == NULL){
		printf("Nenhuma venda efectuada  \n");
		return;
	}
	
	totalVendas = fread(vendas,sizeof(struct Venda),MAX_VENDAS,arquivo);
	printf("Total total de vendas efectuadas %d \n \n",totalVendas);
	
	fclose(arquivo);		
};

void salvarVendas(){
	FILE*arquivo;
	
	arquivo = fopen("vendas.dat","wb");
	
	fwrite(vendas,sizeof(struct Venda),totalVendas,arquivo);
	
	fclose(arquivo);
	printf("Vendas salvos com sucesso \n \n");	
	
};










void nova_venda(){
	int opc, j;
    char nomeProduto[50];
    float valorTotal = 0, lucroTotal = 0;
    srand(time(NULL));
    

    while(1){

        printf("1-Efetuar nova venda\n2-Historico de vendas\n0-Sair\n");
        scanf("%d", &opc);
        system("cls");

        if(opc == 1){

            int opcao = 1;
            int totalItens = 0; 

            vendas[totalVendas].id_venda = rand();
            valorTotal = 0;
            lucroTotal = 0;

            printf("Adicione os produtos da venda.\nDigite 0 para concluir.\n");

            while(1){

                printf("\nID do Produto: ");
                scanf("%d", &vendas[totalVendas].itens[totalItens].id_produto);

                if(vendas[totalVendas].itens[totalItens].id_produto == 0){
                    break;
                }

                int posicaoEncontrada = -1;

                for(j = 0; j < totalProdutos; j++){
                    if(vendas[totalVendas].itens[totalItens].id_produto == produtos[j].id){
                        strcpy(nomeProduto, produtos[j].nome_produto);
                        strcpy(vendas[totalVendas].itens[totalItens].nome_Produto,nomeProduto);
                        posicaoEncontrada = j;
                        vendas[totalVendas].totalItens++;
                        break;
                    }
                }

                if(posicaoEncontrada == -1){
                    printf("Esse produto nao existe...\n");
                    continue;
                }

                printf("Quantidade do produto %s a vender: ", nomeProduto);
                scanf("%d", &vendas[totalVendas].itens[totalItens].quantidade);

                if(vendas[totalVendas].itens[totalItens].quantidade > produtos[posicaoEncontrada].stoque){
                    printf("Estoque insuficiente para %s\n", nomeProduto);
                    continue;
                }

                produtos[posicaoEncontrada].stoque -= vendas[totalVendas].itens[totalItens].quantidade;

                vendas[totalVendas].itens[totalItens].valorUitario =
                    produtos[posicaoEncontrada].preco_venda;

                float total =
                    vendas[totalVendas].itens[totalItens].valorUitario *
                    vendas[totalVendas].itens[totalItens].quantidade;

                float lucro =
                    (produtos[posicaoEncontrada].preco_venda -
                     produtos[posicaoEncontrada].preco_compra) *
                    vendas[totalVendas].itens[totalItens].quantidade;

                valorTotal += total;
                lucroTotal += lucro;

                totalItens++;

                printf("Adicionar mais produtos? (1-sim / 0-nao): ");
                scanf("%d", &opcao);

                if(opcao == 0){
                    break;
                }
            }

            vendas[totalVendas].lucroTotal = lucroTotal;
            vendas[totalVendas].ValorTotal = valorTotal;

            totalVendas++;


        } else if(opc == 2){
        	listar_vendas();
            
        }else if(opc == 0){
        	break;
		}else {
            printf("Opcao invalida\n");
        }
    }
	
    salvarVendas();	
	
}

void mostrarVendas(struct Venda v[]){
	int i,j;
	for (i=0;i<totalVendas;i++){
		printf("----------------------------------------------\n");
		printf("*ID da venda: %d \n",v[i].id_venda);
		printf("*Itens vendidos: \n");
		for(j=0;j<v[i].totalItens;j++){
			printf(" *Item %d:\n",j+1);
			printf("  --ID do produto:%d\n",v[i].itens[j].id_produto);
			printf("  --Nome:%s\n",v[i].itens[j].nome_Produto);
			printf("  --Qantidade Vendida:%d\n",v[i].itens[j].quantidade);
			printf("  --Valor unitario:%.2f\n \n",v[i].itens[j].valorUitario);
		}
		printf("*Valor total:%.2f MT \n",v[i].ValorTotal);
		printf("*Lucro Obtido:%.2f MT \n \n",v[i].lucroTotal);
	}
}

void listar_vendas(){
	printf("===Hstoricos de Vendas===\n \n");
	mostrarVendas(vendas);
}


