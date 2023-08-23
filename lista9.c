#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

int main(){

	char vetS[100], inv[100];
	int i, tamanho;
	printf("Digite os caracteres do vetor: \n ");
	gets(vetS);
	printf("O vetor possui %d caractres", strlen(vetS));
	printf("\n");
	printf("Vetor lido em ordem inversa: ");
	
	tamanho = strlen(vetS);
	
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", vetS[i]);
        
    }
	
	
}
