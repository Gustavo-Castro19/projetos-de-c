#include <stdio.h>

int main() {
    int faturamento[12] = {35000, 18500, 23800, 25000, 13900, 7800, 21900, 30000, 16600, 24100, 26500, 42400};
    float salario[12] = {0}, total = 0;
    int i;

    for(i = 0; i < 12; i++) {
        salario[i] = 2000 + ((1.5 / 100) * faturamento[i]);
        total += salario[i];
    }


    for(i = 0; i < 12; i++) {
        printf("No mes %d o trabalhador recebeu %.2f\n", i + 1, salario[i]);
    }

    printf("O total recebido ao longo do ano foi: %.2f\n", total);

    return 0;
}

