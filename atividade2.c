#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*---------------------------------------------------------------------------------------------------------------------------*
*  Candidato: Kauan Torres  / Est�gio Target                                                                                 *
*  Linguagem: C                                                                                                              *
*----------------------------------------------------------------------------------------------------------------------------*
* 2) Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores   *
* (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um n�mero,     *
* ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.    *
*----------------------------------------------------------------------------------------------------------------------------*/

int fibonacci(int n){
	int f1 = 0, f2 = 1;
	int temp;
	
	if(n == 0 || n == 1){
		return 1;
	}
	
	while(f2 < n){
		temp = f2;
		f2 = f1 + f2;
		f1 = temp;
	}
	
	if(f2 == n){
		return 1;
	} else {
		return 0;
	}
	
}

int main() {
	printf("=================================================== \n \n");
    printf(" Bem vindo, verifique a de Fibonacci. \n \n");
    printf("=================================================== \n \n");
    
	printf("Digite um numero inteiro para verificar se ele est� contido na sequencia de Fibonacci: \n");
	
	int i;
	while (scanf("%i", &i) != 1){ //Leitura somente de n�meros
    static char t[64];
    fgets(t, sizeof(t), stdin); //Limpeza 
    printf("E necessario que seja um numero. Digite novamente: ");
	}

	if(fibonacci(i)){
		printf("O numero %i esta contido na sequencia de Fibonacci. \n", i);
	} else{
		printf("O numero %i NAO esta contido na sequencia de Fibonacci. \n", i);
	}
	
	
	
    return 0;
}
