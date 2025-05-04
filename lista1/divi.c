#include <stdio.h>

int main(){
	int D4,N,DN;
	printf("esse sao os numeros divisiveis por 4\n");
	for(D4=0;D4<=100;D4++){
		if(D4%4==0){
		 printf("%d\n",D4);
	    }
	}
	system("pause");
	system("cls");
	printf("voce quer os numeros divisiveis por qual numero de 0 a 100?\n");
	scanf("%d",&N);
	printf("esses sao os numeros divisiveis por %d\n",N);
	for(DN=0;DN<=100;DN++){
		if(DN%N==0){
			printf("%d\n",DN);
		}
	}
	system("pause");
	return 0;
	
}
