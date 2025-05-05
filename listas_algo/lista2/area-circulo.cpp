#include <stdio.h>
double area_circulo(double R);
int main(){
	double Ru;
	
	printf("qual o raio do circulo?\n");
	scanf("%lf",&Ru);
	
	printf("o raio do circulo eh\n");
	printf("%.2lf",area_circulo(Ru));
	
	return 0;
}
double area_circulo(double R){
	const double pi=3.141;
	return pi*(R*R);
}


