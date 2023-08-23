#include <stdio.h>

int encontrarMaior(int vet[], int x) {
    int maior = vet[0];
    int i;
    for ( i = 1; i < x; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    return maior;
}

int main() {
    int vet[100], n, maior;
    int i;
    printf("Quantidade de elementos do vetor:");
    scanf("%d", &n);
    
    printf("Digite os dados para o vetor:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    
    maior = encontrarMaior(vet, n);
    printf("O maior valor no vetor eh: %d\n", maior);
    
    return 0;
}

