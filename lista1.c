#include <stdio.h>
#include "biblioteca.h"

int calcularSoma(int vetor[], int x) { 
    int soma = 0;
    int i;
    for (i = 0; i < x; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main(){
	
	int vetor[100], n, s;
	printf("Elementos do vetor:");
	scanf("%d",&n);
	printf("Digite os dados para o vetor: ");
	leiaVetor(vetor,n);
	s = calcularSoma(vetor,n);
	printf("A soma dos elementos dos vetores e: %d \n ",s);
	
}
