#include <stdio.h>

float calcularSoma(float vet[], int x) { 
    float soma = 0;
    int i;
    for (i = 0; i < x; i++) {
        soma += vet[i];
    }
    return soma;
}

int main(){
    float vet[5];
    int i;
    
    for(i = 0; i < 5; i++){
        printf("Digite a nota %d da escola: ", i + 1);
        scanf("%f", &vet[i]);
    }
    
    float maior = vet[0];
    float menor = vet[0];
    int IDmaior = 0;
    int IDmenor = 0;
    
    
    for (i = 1; i < 5; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            IDmaior = i;
        }
        if (vet[i] < menor) {
            menor = vet[i];
            IDmenor = i;
        }
    }
    
    
    int novoTamanho = 3;
    float vetC[novoTamanho];
    int contador = 0;

    for (i = 0; i < 5; i++) {
        if (i != IDmaior && i != IDmenor) {
            vetC[contador] = vet[i];
            contador++;
        }
    }
    
    float soma = calcularSoma(vetC, novoTamanho);
    printf("\nA nota final da escola no quesito considerado: %.1f\n", soma);    
    
    return 0;
}

