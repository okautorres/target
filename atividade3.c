#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*---------------------------------------------------------------------------------------------------------------------------*
*  Candidato: Kauan Torres  / Estágio Target                                                                                 *
*  Linguagem: C                                                                                                              *
*----------------------------------------------------------------------------------------------------------------------------*
* 3) Atividade 3                                                                                                             *
*----------------------------------------------------------------------------------------------------------------------------*/

#define DIAS 30

int main() {
    float faturamento[DIAS] = {
        1325.0, 6432.0, 4123.0, 122.0, 33246.0, 0.0, 431.0, 4326.0, 1234.0, 6543.0, 5643.0, 3000.0, 4366.0, 6544.0, 7231.0, 4231.0, 0.0, 6543.0, 3253.0, 6653.0, 7544.0, 3412.0, 7558.0, 32145.0, 0.0, 3125.0, 5233.0, 4443.0, 8776.0, 0.0
    };
    
    float menorFaturamento,  maiorFaturamento, mediaMes, sFaturamento = 0.0;
    int acimaMedia = 0, i = 0;
    
    
    for ( i = 0; i < DIAS; i++) {
        if (faturamento[i] < menorFaturamento && faturamento[i] != 0) {
            menorFaturamento = faturamento[i];
        }
        if (faturamento[i] > maiorFaturamento) {
            maiorFaturamento = faturamento[i];
        }
        sFaturamento += faturamento[i];
    }

     mediaMes = sFaturamento / DIAS;
    
    for ( i = 0; i < DIAS; i++) {
        if (faturamento[i] > mediaMes) {
            acimaMedia++;
        }
    }
	printf("=================================================== \n \n");
    printf("               FATURAMENTOS: \n \n");
    printf("=================================================== \n \n");
    
    printf("\n O MENOR valor de faturamento ocorrido em um dia do mes: %.2f \n", menorFaturamento);
    printf("\n O MAIOR valor de faturamento ocorrido em um dia do mes: %.2f \n", maiorFaturamento);
    printf("\n Numero de dias no mes em que o valor de faturamento diario foi superior a media mensal: %d \n", acimaMedia);

    return 0;
}

