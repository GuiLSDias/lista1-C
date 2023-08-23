#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int busca(int vet[], int x, int a) {
	int i;
    for (i = 0; i < x; i++) {
        if (vet[i] == a) {
            return i; 
        }
    }
    return -1;  
}

int main(){
	
	int vet[100], n, a, i, p;
	printf("Quantidade de elementos do vetor:");
	scanf("%d",&n);
	for (i = 0; i < n; i++){
		
		vet[i] = rand() % 100;
		
	}
	printf("\n");
	escrevaVetor(vet,n); 
	printf("Elemento a ser buscado: ");
	scanf("%d",&a);
	printf("\n");
	p = busca(vet,n,a);
	
	if(p != -1){
		printf("\n");
		printf("O numero %d esta na posicao %d do vetor: ",a,p);
		
	}
	
	else{
			printf("\n");
			printf("O numero %d nao esta no vetor: ",a);
		
	}
	
	
	
}
