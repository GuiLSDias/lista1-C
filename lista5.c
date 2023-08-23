#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int verificarElemento(int vet[], int x, int a) {
   int qnt = 0;
   int i;
    for ( i = 0; i < x; i++) {
       if(vet[i] == a){
       	
       	qnt ++;
       	
	   }
	   
        }
    
    return qnt;
}

int main(){
	
	int vet[100], n, a, qnt;
	printf("Qtde de elementos do vetor:");
	scanf("%d",&n);
	printf("Digite os dados para o vetor: ");
	leiaVetor(vet,n);
	printf("Digite o elemento a ser verificado: ");
	scanf("%d",&a);
	qnt = verificarElemento(vet,n,a);
	printf("\n");
	printf("O elemento se repete %d vezes",qnt);
	printf("\n");
	escrevaVetor(vet,n);
	

	
}
