#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor1[5]={0},vetor2[5]={0},VetorR[5]={0},i;
	printf("digite 5 numeros em ordem\n");
	for(i=0;i<5;i++){
		scanf("%d",&vetor1[i]);
	}
	printf("digite outros 5 numeros\n");
	for(i=0;i<5;i++){
		scanf("%d",&vetor2[i]);
	}
	int compara=0;
	for(i=0;i<5;i++){
		if(vetor1[i]==vetor2[i] || vetor1[i]<vetor2[i]){
			compara=vetor1[i];
			
		}
        else if(vetor1[i]>vetor2[i]){
        	compara=vetor2[i];
		}
		VetorR[i]=compara;
	}
	printf("vetor resultante: ");
	for(i=0;i<5;i++){
		printf("%d",VetorR[i]);
		if(i<4) printf(",");
	}
	return 0; 
}
