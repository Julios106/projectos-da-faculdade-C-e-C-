#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int voto,cand1,cand2,cand3,cand4,nulo,branco,total_votos;
	
	cand1 = 0; cand2 = 0; cand3 = 0; cand4 = 0;nulo = 0; branco = 0;
	
	voto = 9;
	
	while(voto != 0){
		printf("\n");
		printf("====== Bem vindo ao sistema de votos ====== \n");
		printf("Escolhe uma opcao de voto \n");
		printf("Para fechar o programa digite 0 \n");
		printf("\n");
		
		printf(" 1-Chapo \n 2-Venancio \n 3-Forquilha \n 4-Ossufo \n 5-Deixar voto nulo \n 6-Deixar em branco \n 0-Fechar o programa \n");
		printf("Digite uma opcao: \n");
		scanf("%d",&voto);
		
		if(voto == 1){
			
			printf("voto valido para o candidato 1-Chapo \n");
			cand1++;
		}else if(voto == 2){
			
			printf("voto valido para o candidato 2-Venancio \n");
			cand2++;
		}else if(voto == 3){
			
			printf("voto valido para o candidato 3-Forquilha \n");
			cand3++;
		}else if(voto == 4){
			
			printf("voto valido para o candidato 4-Ossufo \n");
			cand4++;
		}else if(voto == 5){
			
			printf("voto anulado \n");
			nulo++;
		}else if(voto == 6){
			
			printf("Voto deixado em branco");
			branco++;
		}else if(voto == 0){
			
			printf("Fechando o programa...\n");
		}else {
			printf("Opcao invalida. \n Escolha uma opcao valida");
		}	
		
	}
	
	total_votos = cand1+cand2+cand3+cand4+nulo+branco ;
	float percentagem_nulos = ((float)nulo/total_votos)*100;
	float percentagem_brancos = ((float)branco/total_votos)*100;
	
	printf("======Resultado da eleicoes======\n");
	printf("1-Chapo: %d votos \n",cand1);
	printf("2-Venancio: %d votos \n",cand2);
	printf("3-Forquilha: %d votos \n",cand3);
	printf("4-Ossufo: %d votos \n",cand4);

	printf("* Numero total de votos: %d \n",total_votos);
	printf("* Votos nulos %d votos \n",nulo);
	printf("* Votos em branco %d votos \n",branco);
	
	printf("\n");
	printf("==Em percentagem== \n");
	printf("* votos nulos: %.2f  \n",percentagem_nulos);
	printf("* votos em branco: %.2f  \n",percentagem_brancos);
	
	
	
	return 0;
}
