#include <stdio.h>


void imprimeCrescente(int n) {
    if (n >= 0) {
        imprimeCrescente(n - 1);  
        printf("%d ", n);
    }
}

int main() {
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("Os números de 0 até %d são:\n", n);
    imprimeCrescente(n);

    return 0;
}
