#include <stdio.h>

int soma(int vetor[], int n) {
    if (n == 1) {
        return vetor[0]; 
    } else {
        return vetor[n - 1] + soma(vetor, n - 1);  
    }
}

float mediaVetor(int vetor[], int n) {
    int somaVetor = soma(vetor, n);  
    return (float)somaVetor / n;  
}

int main() {
    int vetor[] = {2, 4, 6, 8, 10}; 
    int n = sizeof(vetor) / sizeof(vetor[0]);  

    float media = mediaVetor(vetor, n);  
    printf("A média dos elementos do vetor é: %.2f\n", media); 

    return 0;
}
