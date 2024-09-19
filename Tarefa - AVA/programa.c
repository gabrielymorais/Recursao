#include <stdio.h>

// calcua o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fatorial(n - 1);
}

// calcula o N-ésimo termo 
int fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// calcula mdc
int mdc(int a, int b) {
    if (b == 0)
        return a;
    else
        return mdc(b, a % b);
}

int main() {
    int calcular, n, a, b;

    do {
        printf("\nEscolha oq vc quer calcular:\n");
        printf("1-Calcular o fatorial de um número\n");
        printf("2-Calcular o N-ésimo termo da sequência de Fibonacci\n");
        printf("3-Calcular o MDC de dois números\n");
        printf("0-Sair\n");
        printf("Opção: ");
        scanf("%d", &calcular);

        switch (calcular) {
            case 1:
                printf("Digite um número para calcular o fatorial: ");
                scanf("%d", &n);
                printf("Fatorial de %d é: %d\n", n, fatorial(n));
                break;
            
            case 2:
                printf("Digite a posição N para calcular o N-ésimo termo de Fibonacci: ");
                scanf("%d", &n);
                printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, fibonacci(n));
                break;

            case 3:
                printf("Digite dois números para calcular o MDC:\n");
                printf("N 1: ");
                scanf("%d", &a);
                printf("N 2: ");
                scanf("%d", &b);
                printf("O MDC de %d e %d é: %d\n", a, b, mdc(a, b));
                break;

            case 0:
                printf("Saindo do programa.\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (calcular != 0);

    return 0;
}
