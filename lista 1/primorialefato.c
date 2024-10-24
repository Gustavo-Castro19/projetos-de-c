#include <stdio.h>

// Algoritmo fatorial e primorial
unsigned long long fato(unsigned long long a) {
    unsigned long long result = 1, I;
    for (I = a; I > 1; I--) {
        result *= I;
    }
    return result;
}

unsigned long long primo(unsigned long long b) {
    unsigned long long result = 1, Z, j;
    for (Z = 2; Z <= b; Z++) {
        int is_prime = 1;
        for (j = 2; j * j <= Z; j++) {
            if (Z % j == 0) {
                is_prime = 0; // Não é primo
                break;
            }
        }
        if (is_prime) {
            result *= Z;
        }
    }
    return result;
}

int main() {
    unsigned long long N;
    char tt;

    printf("Qual numero de 1 a 50 voce quer?\n");
    scanf("%llu", &N);
    printf("Digite\n 1-para saber o fatorial\n 2-para saber o primorial\n");
    getchar(); // Para consumir o caractere de nova linha deixado pelo scanf
    tt = getchar();

    switch (tt) {
        case '1':
            printf("Fatorial de %llu: %llu\n", N, fato(N));
            break;
        case '2':
            printf("Primorial de %llu: %llu\n", N, primo(N));
            break;
        default:
            printf("Nao eh uma opcao\n");
            return 1;
    }

    return 0;
}


