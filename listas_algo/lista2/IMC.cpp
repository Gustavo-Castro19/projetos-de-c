#include <stdio.h>

float IMC(float peso,float altura);

int main(){
	float P,A,I;
	do{
		printf("qual o peso?(em kg)\n");
		scanf("%f",&P);
		printf("qual a altura?(em m)\n");
		scanf("%f",&A);
		I=IMC(P,A);
		 if(I>0 && I<=16.99) printf("muito abaixo do peso\n");
		  else if(I>=17 && I<=18.4) printf("abaixo do peso\n");
		  else if(I>=18.5 && I<=24.9) printf("peso normal\n");
		  else if(I>=25 && I<=29.9) printf("acima do peso\n");
		  else if(I>=30 && I<=34.4) printf("muito acima do peso\n");
		  else if(I>=35 && I<40) printf("obesidade\n");
		  else if(I>=40) printf("obesidade morbida\n");
	}
	while(I!=0);
	printf("o loop acabou\n");
	return 0;
}
float IMC(float peso,float altura){
	float IMCD=peso/(altura*altura);
	return IMCD;
}
