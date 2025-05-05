#include <stdio.h>
bool par_impar(int x);
int main(){
	int num;
	bool IP;
	printf("digite um numero\n");
	scanf("%d",&num);
	IP = par_impar(num);
	if(IP==true){
		printf("o numero eh par\n");
	}
	else{
		printf("o numero eh impar\n");
	}
	return 0;
}
bool par_impar(int x){
	if (x%2==0){
		return true;
	}
	else{
		return false;
	}
}
