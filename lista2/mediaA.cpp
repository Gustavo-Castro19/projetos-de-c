#include <stdio.h>

float medias(float n1, float n2, float n3, char M);

int main() {
    float nota1, nota2, nota3;
    float media;
    char option, res = 'y'; 

    do {
        printf("Digite a 1a nota: ");
        scanf("%f", &nota1);
        
        printf("Digite a 2a nota: ");
        scanf("%f", &nota2);
        
        printf("Digite a 3a nota: ");
        scanf("%f", &nota3);
        
        printf("Digite P para media ponderada ou A para media aritmetica: ");
        getchar(); 
        option = getchar();

        if (option != 'P' && option != 'A') {
            printf("Valor invalido\n");
            continue; 
        }
        
        media = medias(nota1, nota2, nota3, option);
        printf("Media = %.2f\n", media);
        printf("Voce quer digitar mais alguma nota? (y/n): ");
        getchar(); 
        res = getchar();
    } while (res == 'y' || res == 'Y');

    return 0;
}

float medias(float n1, float n2, float n3, char M) {
    switch (M) {
        case 'P':
            return ((n1 * 5) + (n2 * 3) + (n3 * 2)) / 10; 
        case 'A':
        	return (n1 + n2 + n3) / 3;
        default:
            return 0.0; 
    }
}

