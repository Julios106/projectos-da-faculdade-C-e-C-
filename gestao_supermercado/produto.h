#include "config.h"

void carregarProdutos();
void salvarProdutos();

void cadastrarProduto();
void listarProdutos();
void buscarProduto();
void interface();



struct Produto {
	int id;
	char nome_produto[50];
	int n_serie;
	float preco_venda;
	float preco_compra;
	int stoque;
};

extern struct Produto produtos[MAX];
extern int totalProdutos;
