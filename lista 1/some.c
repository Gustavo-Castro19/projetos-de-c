#include <stdio.h>

int main() {
    int N, Soma = 0, I;
    
    printf("Voce quer a soma ate qual inteiro?\n");
    scanf("%d", &N);
    
    for (I = 1; I <= N; I++) {
        Soma += I;  // Add I to Soma
    }
    
    printf("A soma eh igual a %d\n", Soma);
    return 0;
}

