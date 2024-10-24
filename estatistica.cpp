#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int max = 10;

void bubblesort(int arr[], int size);
float mediana(int med[], int tam);
int moda(int md[], int tt);
float variancia(int var[], int sz, float m);

int main() {
    int arr[max] = {0}, i;
    int soma = 0;

    printf("Entre 10 numeros:\n");
    for (i = 0; i < max; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < max; i++) {
        soma += arr[i];
    }
    
    bubblesort(arr, max);

    printf("Array em ordem: ");
    for (i = 0; i < max; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    float media = (float)soma / max;
    printf("A media eh %.2f\n", media);

    float median = mediana(arr, max);
    printf("A mediana eh %.2f\n", median);
    printf("A moda eh %d\n", moda(arr, max));

    float vari = variancia(arr, max, media);
    double dp = sqrt(vari);
    printf("A variancia eh %.2f\n", vari);
    printf("O desvio padrao eh %.2f\n", dp);

    return 0;
}

void bubblesort(int arr[], int size) {
    int i, j, aux;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

float mediana(int med[], int tam) {
    if (tam % 2 == 0) {
        return (med[tam / 2 - 1] + med[tam / 2]) / 2.0;
    } else {
        return med[tam / 2];
    }
}

float variancia(int var[], int sz, float m) {
    float sum = 0;
    for (int o = 0; o < sz; o++) {
        sum += (var[o] - m) * (var[o] - m);
    }
    return sum / sz;
}

int moda(int md[], int tt) {
    int cont[10] = {0}; 
    int maior = 0; 
    int maxCount = 0; 
    
    for (int j = 0; j < tt; j++) {
        if (md[j] >= 0 && md[j] < 10) { 
            cont[md[j]]++;
        }
    }

    for (int p = 0; p < 10; p++) {
        if (cont[p] > maxCount) {
            maxCount = cont[p];
            maior = p; 
        }
    }

    return maior; 
}
