#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*---------------------------------------------------------------------------------------------------------------------------*
*  Candidato: Kauan Torres  / Estágio Target                                                                                 *
*  Linguagem: C                                                                                                              *
*----------------------------------------------------------------------------------------------------------------------------*
* 5) Atividade 5                                                                                                             *
*----------------------------------------------------------------------------------------------------------------------------*/

void inverterString(char str[]) {
    int n = strlen(str), i;
    for ( i = 0; i < n / 2; i++) {
        
        char temp = str[i]; //K A U A N 
        str[i] = str[n - i - 1]; // 4 - N 
        str[n - i - 1] = temp; //4 = 0 
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    inverterString(str);

    printf("String invertida: %s\n", str);

    return 0;
}


