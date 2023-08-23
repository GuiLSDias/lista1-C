#include <stdio.h>

int encontrarMenor(int vet[], int x) {
    int menor = vet[0];
    int i;
    for ( i = 1; i < x; i++) {
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }
    return menor;
}

int main() {
    int vet[100], n, menor;
    int i;
    printf("Quantidade de elementos do vetor:");
    scanf("%d", &n);
    
    printf("Digite os dados para o vetor:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    
    menor = encontrarMenor(vet, n);
    printf("O menor valor no vetor eh: %d\n", menor);
    
    return 0;
}

