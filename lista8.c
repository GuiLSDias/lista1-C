#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

int main(){
	
	int r[100], n, i, c[100], f;
	printf("Quantidade de vezes que o dado foi lancado: ");
	scanf("%d",&n);
	
	for (i = 0; i < n; i++) {
        printf("lançamento %d: ", i + 1);
        scanf("%d", &r[i]);
    }
	
	f = 6;
	c[f];
	
	contarFaces(r, n, c, f);
	
	
    for (i = 0; i < f; i++) {
    	
        printf("Face %d: %d ocorrencias\n", i + 1, c[i]);
        
    }
	
	

	
}
