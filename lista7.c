#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int multiplicarVetores(int vet1[], int vet2[], int vetR[], int x) {
   int i;
    for ( i = 0; i < x; i++) {
      
      vetR[i] = vet1[i] * vet2[i];
      
	   
        }
    
}

int main(){
	
	int vet1[100], vet2[100], vetR[100], n, i;
	printf("Quantidade de elementos dos vetores:");
	scanf("%d",&n);
	printf("Digite os dados para o vet1: ");
	leiaVetor(vet1,n);
	printf("Digite os dados para o vet2: ");
	leiaVetor(vet2,n);
	printf("\n");
	multiplicarVetores(vet1, vet2, vetR, n);
	printf("\n");
	printf("Resultado: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetR[i]);
    }
    printf("\n");
	
	

	
}
