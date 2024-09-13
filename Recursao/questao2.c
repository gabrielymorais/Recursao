#include <stdio.h>

int soma(int n) {
    if (n == 1) {
        return 1;  
    } else {
        return n + somatorio(n - 1);  
    }
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = somatorio(n);
    printf("O somatorio dos números de 1 até %d eh: %d\n", n, resultado);

    return 0;
}
