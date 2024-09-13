#include <stdio.h>

void imprimeDecrescente(int n) {
    if (n >= 0) {
        printf("%d ", n); 
        imprimeDecrescente(n - 1);  
    }
}

int main() {
    int n;
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("Os números de %d até 0 são:\n", n);
    imprimeDecrescente(n);

    return 0;
}
