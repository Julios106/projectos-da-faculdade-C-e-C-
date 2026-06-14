#include <stdio.h>
#include <stdlib.h>

float percentagem (float voto_nuloAndBranco,float total_voto){	
	float percentagem = (voto_nuloAndBranco/total_voto)*100;
	
	return percentagem;	
}




int main() {
	int cand1,cand2,cand3,cand4,voto_nulo,voto_branco,opcao;
	cand1 = 0;
	cand2 = 0;
	cand3 = 0;
	cand4 = 0;
	voto_nulo = 0;
	voto_branco = 0;
	
	
	while(1){
		printf(" 1-Ossufo \n 2-Venancio \n 3-Chapo \n 4-Forquilha \n 5-voto nulo \n 6-Voto em branco \n 0-Sair \n \n");		
		
		printf("Digite opcao valida:");
		scanf("%d",&opcao);
		
		if(opcao == 1){
			printf("voto valido para Ossufo \n");
			cand1 ++;
		}else if(opcao == 2){
			printf("voto valido para Venancio \n");
			cand2 ++;
		}else if(opcao == 3){
			printf("voto valido para Chapo \n");
			cand3++;
		}else if(opcao == 4){
			printf("voto valido para Forquilha \n");
			cand4++;
		}else if(opcao == 5){
			printf("voto anulado \n");
			voto_nulo++;
		}else if(opcao == 6){
			printf("voto deixado em branco \n");
			voto_branco++;
		}else if(opcao == 0){
			printf("Fechando o programa... \n \n");
			break;
		}else {
			printf("Opcao invalida \n");
		}
	}
	
	int total_votos = cand1 + cand2 + cand3 + cand4 + voto_nulo + voto_branco;
	float p_nulo = percentagem((float)voto_nulo,(float)total_votos);
	float p_branco = percentagem((float)voto_branco,(float)total_votos);
	
	
	printf(">>>Resultador da votacao<<< \n \n");
	printf("* Total de votos - %d \n",total_votos);
	printf("1-Ossufo-%d \n",cand1);
	printf("2-Venancio-%d \n",cand2);
	printf("3-Chapo-%d \n",cand3);
	printf("4-Forquilha-%d \n \n",cand4);
	
	printf("=================================================== \n \n");
	
	printf("* Votos nulos - %d \n ",voto_nulo);
	printf("* Votos em branco - %d \n",voto_branco);
	printf("* percentagem de votos nulos %.2f%% \n",p_nulo);
	printf("* percentagem de votos em branco %.2f%% \n",p_branco);

	
	return 0;
}
