#include <stdio.h>
#include <stdlib.h>
#define MAX 10

// Programa principal
int main() {
    // Carregar as matr�culas
    int matri[MAX] = {74, 111, 12, 65, 67, 143, 3, 99, 44, 101};
    float notas[MAX] = {4.5, 8.7, 6.9, 5.0, 3.4, 4.9, 7.3, 7.8, 4.8, 5.8};
  
    // Aguardar a op��o desejada
    printf("\t1 - Media geral\n");
    printf("\t2 - Nota final de um aluno\n");
    printf("\t3 - Relacao de notas finais\n");
    printf("\t4 - Aprovacao ou nao de um aluno\n");
    printf("\t5 - Qual foi a maior nota da disciplina\n");
    printf("\t6 - Qual foi a menor nota da disciplina\n");
    printf("\t ou digite 0 para terminar o programa\n");

    int option, i;
    float mediaG, aux;
    bool continua = 0;

    do {
        printf("\n\n\tDigite sua opcao: ");
        scanf("%d", &option);

        if (option < 0 || option > 6) {
            printf("Opcao invalida.\n");
            continue;
        }

        switch (option) {
            case 1:
                for (i = 0; i < MAX; i++) {
                    mediaG += notas[i];
                }
                printf("Media geral: %.2f\n", mediaG / MAX);
                break;
            case 2:
                printf("Digite a posicao da chamada do aluno: ");
                scanf("%d", &i);
                printf("O aluno %d tirou %.2f\n", matri[i - 1], notas[i - 1]);
                break;
            case 3:
                printf("Relacao de notas finais:\n");
                for (i = 0; i < MAX; i++) {
                    printf("%.2f ", notas[i]);
                }
                printf("\n");
                break;
            case 4:
                printf("Voce quer saber a situacao de que aluno (posicao na chamada)? ");
                scanf("%d", &i);
                if (notas[i - 1] >= 5) {
                    printf("O aluno %d esta aprovado.\n", matri[i - 1]);
                } else {
                    printf("O aluno %d esta reprovado.\n", matri[i - 1]);
                }
                break;
            case 5:
                for (i = 0; i < MAX - 1; i++) {
                    if (notas[i] >= notas[i + 1]) {
                        aux = notas[i];
                        notas[i] = notas[i + 1];
                        notas[i + 1] = aux;
                    }
                }
                printf("A maior nota foi %.2f\n", notas[MAX - 1]);
                break;
            case 6:
    		for (i = 0; i < MAX - 1; i++) {
        		if (notas[i] >= notas[i + 1]) { // Changed the logic here
            	 aux = notas[i];
            	 notas[i] = notas[i + 1];
            	 notas[i + 1] = aux;
        		}
    		}
    		printf("A menor nota foi %.2f\n", notas[0]);
    		 break;
            default:
                printf("Obrigado, volte sempre!\n");
                continua = 1;
                break;
        }
    } while (!continua);

    return 0;
}
