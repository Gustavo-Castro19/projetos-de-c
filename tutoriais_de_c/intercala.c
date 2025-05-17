#include <stdio.h>
#include <stdlib.h>

void bubblesort(int vt[], int tamanho);// uma função de bubblesort

int main() {
    int vet1[5], vet2[5], vetR[10], i;


    printf("Digite o 1 vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vet1[i]);
    }
    
    printf("Digite o 2 vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vet2[i]);
    }

    // junta os dois vetores em 1 só
    for (i = 0; i < 5; i++) {
        vetR[i] = vet1[i];        // copia os valores do vetor 1 nas posições  0 a 4
        vetR[i + 5] = vet2[i];    // copia os valores do vetor 2 nas posições  5 a 9
    }

    // ordena o vetor resultante
    bubblesort(vetR, 10);

    //mostra o resultado
    printf("As duas listas juntas formam:\n");
    for (i = 0; i < 10; i++) {
    	if(i!=0 && vetR[i]==vetR[i-1]){ //condição para verificar duplicadas
        	continue;
		}
        printf("%d ", vetR[i]);                             
    }
    printf("\n"); 
    return 0;
}

void bubblesort(int vt[], int tamanho) {
    int i, j, aux;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (vt[j] > vt[j + 1]) {
                aux = vt[j];
                vt[j] = vt[j + 1];
                vt[j + 1] = aux;
            }
        }
    }
}



