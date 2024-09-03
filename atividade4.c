#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*---------------------------------------------------------------------------------------------------------------------------*
*  Candidato: Kauan Torres  / Estágio Target                                                                                 *
*  Linguagem: C                                                                                                              *
*----------------------------------------------------------------------------------------------------------------------------*
* 4) Atividade 4                                                                                                             *
*----------------------------------------------------------------------------------------------------------------------------*/

int main() {
	
	float totalF = 0.0;
	float faturamento[5] = {67836.43, 36678.66, 29229.88, 27165.48, 19849.53};
	int i;
	
	for(i = 0; i < 5; i++){  
		 totalF = faturamento[i] + totalF;
	}
	
	printf("=================================================== \n \n");
    printf("      PERCENTUAL DE REPRESENTACAO POR ESTADO: \n \n");
    printf("=================================================== \n \n");
    
    int SP = (faturamento[0] / totalF)*100;
    int RJ = (faturamento[1] / totalF)*100;  
    int MG = (faturamento[2] / totalF)*100;   
    int ES = (faturamento[3] / totalF)*100;  
    int Outros = (faturamento[4] / totalF)*100;  
	
				    
    printf("SP: %i%% de representacao. \n", SP);
    printf("RJ: %i%% de representacao. \n", RJ);
    printf("MG: %i%% de representacao. \n", MG);
    printf("ES: %i%% de representacao. \n", ES);
    printf("Outros: %i%% de representacao.", Outros);
    
    
    return 0;
}

