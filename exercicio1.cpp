#include <stdio.h> 
#define MAX 20
void bubblesort(int vet[],int tam);
int main(){
	int vetor[MAX],i;
	printf("digite 20 numeros:\n");
	for(i=0;i<MAX;i++){
		scanf("%d",&vetor[i]);
	} 
	int soma=0;
	for(i=0;i<MAX;i++){
		soma+=vetor[i];
	}
	bubblesort(vetor,MAX);
	printf("a soma de todos os numeros do vetor eh %d\n o maior numero eh %d e o menor numero eh %d",soma,vetor[MAX],vetor[0]);
}
void bubblesort(int vet[],int tam){
	int n,aux;
	for(n=0;n<tam;n++){
		if(vet[n]>vet[n+1]){
			aux=vet[n];
			vet[n]=vet[n+1];
			vet[n+1]=aux;
		}	
	}
}
