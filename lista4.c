#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int contarImpar(int vet[], int x) {
    int impar = vet[0];
    int i;
    int contar = 0;
    for ( i = 1; i < x; i++) {
        if (vet[i] %2 != 0  ) {
       impar = vet[i];
       contar++;
       
        }
    }
    return contar;
}

int main(){
	
	int vet[100], n, qnt;
	printf("Quantidade de elementos do vetor:");
	scanf("%d",&n);
	printf("Digite os dados para o vetor: ");
	leiaVetor(vet,n);
	qnt = contarImpar(vet,n);
	printf("Quantidade de numeros impares: %d",qnt);

	
}


