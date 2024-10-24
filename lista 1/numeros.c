#include <stdio.h>

int main() {
    int numeros[5];
    int i,soma_pares = 0, cont_pares = 0, soma = 0, maior, menor;

    // Recebendo os números
    for ( i = 0; i < 5; i++) {
        do {
            printf("Digite o %dº número (entre 0 e 100): ", i + 1);
            scanf("%d", &numeros[i]);
        } while (numeros[i] < 0 || numeros[i] > 100);
        
        // Atualizando soma, maior e menor
        soma += numeros[i];
        if (i == 0) {
            maior = menor = numeros[i]; // Inicializa maior e menor com o primeiro número
        } else {
            if (numeros[i] > maior) {
                maior = numeros[i];
            }
            if (numeros[i] < menor) {
                menor = numeros[i];
            }
        }

        // Verificando se é par
        if (numeros[i] % 2 == 0) {
            soma_pares += numeros[i];
            cont_pares++;
        }
    }

    // Cálculos
    double media = soma / 5.0;
    double media_pares = (cont_pares > 0) ? (soma_pares / (double)cont_pares) : 0;
    double porcentagem_pares = (cont_pares > 0) ? (cont_pares / 5.0) * 100 : 0;

    // Exibindo resultados
    printf("\nResultados:\n");
    printf("Soma dos numeros: %d\n", soma);
    printf("Media dos numeros: %.2f\n", media);
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Media dos numeros pares: %.2f\n", media_pares);
    printf("Porcentagem de numeros pares: %.2f%%\n", porcentagem_pares);

    return 0;
}

