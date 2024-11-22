#include <stdio.h>
#include <string.h>

int main() {
   
    char modelos[5][20] = {"Corsa","Monza", "Palio", "Uno", "Kwid"};
    float consumo[5] = {10.2, 8.0, 10.4, 13.1, 10.8};
    
    int i, maxIndex = 0;
    
   
    for (i = 1; i < 5; i++) {
        if (consumo[i] > consumo[maxIndex]) {
            maxIndex = i;
        }
    }
    
    printf("O carro mais economico eh o: %s que faz %.1f km/L\n\n", modelos[maxIndex], consumo[maxIndex]);
    for(i=0;i<5;i++){
    	printf("modelo: %s consome %.2f litros para andar 1000 km\n",modelos[i],1000/consumo[i]);
	}
    
    return 0;
}
