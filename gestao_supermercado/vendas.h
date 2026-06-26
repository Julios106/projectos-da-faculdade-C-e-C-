#include "config.h"

void nova_venda();
void carregarVendas();

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

extern struct Venda vendas[MAX_VENDAS];
extern int totalVendas;
