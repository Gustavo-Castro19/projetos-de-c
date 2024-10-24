#include <stdio.h>
#include <stdlib.h>

int soma(int num[],int tamanho); //para soma
float media(int num[],int tamanho);//retorna a media 
int maior(int num[],int tamanho);//retorna o maior numero
int menor(int num[],int tamanho);//retorna o menor numero
float PercEven(int num[],int tamanho);//retorna a porcentagem de numeros impares

int main(){
	int vetor[5],i;
	printf("digite 5 numeros\n");
	for(i=0;i<5;i++){
	    scanf("%d",&vetor[i]);
	}
	printf("esse sao os 5 numeros\n");
	for(i=0;i<5;i++){
		printf("%d ",vetor[i]);
	}
	printf("\n\n");
	printf("a soma dos numeros eh %d\n",soma(vetor,5));
	printf("a media dos numeros eh %.2f\n",media(vetor,5));
	printf("o maior numero eh %d\n",maior(vetor,5));
	printf("o menor numero eh %d\n",menor(vetor,5));
	printf("%.2f%% dos numeros sao impares\n",PercEven(vetor,5));
	return 0;
}
int soma(int num[],int tamanho){
int j,final=0;
for(j=0;j<tamanho;j++){
	final+=num[j];
}
   return final;
}
float media(int num[],int tamanho){
	int n,final=0;
for(n=0;n<tamanho;n++){
	final+=num[n];
}
   return (float)final/tamanho;
}
int maior(int num[],int tamanho){
	int max=num[0],compara=num[1],cont;
	for(cont=1;cont<tamanho;cont++){
		if(max<compara|| max==compara ){
			max=compara;
			compara=num[cont+1];
		}
		else{
			compara=num[cont+1];
		}
	} 
	return max;
}
int menor(int num[],int tamanho){
	int min=num[0],compara2=num[1],cont;
	for(cont=1;cont<tamanho;cont++){
		if(min>compara2|| min==compara2 ){
			min=compara2;
			compara2=num[cont+1];
		}
		else{
			compara2=num[cont+1];
		}
	} 
	return min;
}
float PercEven(int num[],int tamanho){
	int E;
	float D=0;
	for(E=0;E<=tamanho;E++){
		if(num[E]%2!=0){
			D++;
		}
	}
	return (D/5)*100;
}
	

