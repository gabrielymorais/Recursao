#include <stdio.h>

int somaCubos(int n) {
    if (n == 1) {
        return 1; 
    } else {
        return n * n * n + somaCubos(n - 1);  
    }
}

int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = somaCubos(n);
    printf("A soma dos cubos dos primeiros %d números é: %d\n", n, resultado);

    return 0;
}
