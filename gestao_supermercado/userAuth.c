#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "produto.h"

struct User {
	char nome[50];
	char senha[50];	
}; 



struct User newUser;

void loginAdmin(){
	struct User userAdmin;
	strcpy(userAdmin.nome,"admin");
	strcpy(userAdmin.senha,"12345@78");
	
	
	char nome[50],senha[50];
	
	while(1){
		printf("digite o nome:");
		scanf("%49[^\n]s",&nome);
		getchar();
		printf("insira a Senha:");
		scanf("%49[^\n]s",&senha);
		getchar();
		
		
		int compararNome = strcmp(nome,userAdmin.nome);
		int compararSenha = strcmp(senha,userAdmin.senha);
		
		if(compararNome == 0 && compararSenha == 0){
			printf("Bem vindo...\n");
			break;
		}else{
			printf("Credenciais invalidas...\n");
		}
		
		
	}
}

void gravarUser(){
	FILE*arquivo;
	
	arquivo = fopen("auth.dat","wb");
	
	fwrite(&newUser,sizeof(struct User),1,arquivo);
	
	fclose(arquivo);
}

void novoUsuario(){
	char nome[50],senha[50];
	
	while(1){
		printf(">>cadastro ao sistema com novos dados do proprietario<<\n");
		
		printf("Digite o seu nome:");
		scanf("%49[^\n]s",&nome);
		
		
		getchar();
		printf("Digite uma nova senha:");
		scanf("%49[^\n]s",&senha);
		getchar();
		
		int tamanho_senha = strlen(senha);
		
		if(tamanho_senha<8){
			system("cls");
			printf("A senha deve conter no minimo 8 caracteres...\n");
		}else if(tamanho_senha>49){
			system("cls");
			printf("A senha deve conter no minimo 8 caracteres e maximo 49 caracteres...\n");
		}else {
			strcat(newUser.nome,nome);
			strcat(newUser.senha ,senha);
			gravarUser();
			system("cls");
			return;
		}
		
		
	}

}

void loginUser(){
	char nome[50],senha[50];
	
	while(1){
		printf(">>Login ao sistema do proprietario<<\n");
		
		printf("Digite o snome:");
		scanf("%49[^\n]s",&nome);
		getchar();
		
		printf("Digite a senha:");
		scanf("%49[^\n]s",&senha);
		getchar();
		
		int isNomeCorreto = strcmp(nome,newUser.nome);
		int isSenhaCorreta = strcmp(senha,newUser.senha);
		
		if(isNomeCorreto==0 && isSenhaCorreta == 0){
			system("cls");
			printf("Bem vindo...\n");
			break;
		}else {
			system("cls");
			printf("Credenciais invalidas...\n");
			
		}
		
		
	}
	
}
void carregarUser(){
	FILE*arquivo;
	
	arquivo = fopen("auth.dat","rb");
	
	if(arquivo == NULL){
		printf("Bem vindo ao sistema log com os dados que o tecnico forneceu\n");
		loginAdmin();
		novoUsuario();		
	}else {
		fread(&newUser,sizeof(struct User),1,arquivo);
		fclose(arquivo);
		loginUser();
	}	
	
	
	
	
	
}



void userAuth(){
	carregarUser();
	interfaceProdutos();	

}
