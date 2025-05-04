#include <stdio.h>
#include <string.h>

void cpfConfirm(int vt[], int tam);

int main() {
    char cpf[20] = {0};  
    int i, cpfV[11] = {0};

	printf("digite seu cpf\n");
	
    fgets(cpf,20, stdin);//o usuario digita seu cpf dentro da string cpf podendo colocar caracteres especiais como na formatacao padrao 
       
    int digcont=0;//conta os digitos e serve para garantir que a variavel cpfV apenas pegue caracteres que sao numeros 
    for (i = 0; i <strlen(cpf); i++) {
    	if(cpf[i]>='0' && cpf[i]<='9')
        cpfV[digcont++] = cpf[i] - '0';
    }
    
    if(digcont!=11){
    	printf("tem menos de 11 digitos nao eh cpf\n");
    	return 1;
	}
    //cpf ficticio para teste 123.456.789-01
    cpfConfirm(cpfV, 11);

    return 0;
}

void cpfConfirm(int vt[], int tam) {
    int cont, soma = 0, peso, digit1, digit2;

   
    for (cont = 0; cont < tam; cont++) {
        soma += vt[cont];
    }

   
    if (soma % 11 == 0) {
        printf("O CPF esta correto!!!\n");
    } else {
        
        peso = 10;
        digit1 = 0;
        for (cont = 0; cont < 9; cont++) {
            digit1 += vt[cont] * peso--;
        }
        digit1 %= 11;
        if (digit1 == 0 || digit1 == 1) {
            digit1 = 0;
        } else {
            digit1 = 11 - digit1;
        }

       
        printf("O primeiro digito verificador eh %d\n", digit1);
        vt[9] = digit1;

        
        peso = 11;
        digit2 = 0;
        for (cont = 0; cont < 10; cont++) {
            digit2 += vt[cont] * peso--;
        }
        digit2 %= 11;
        if (digit2 == 0 || digit2 == 1) {
            digit2 = 0;
        } else {
            digit2 = 11 - digit2;
        }

        
        printf("O segundo digito verificador eh %d\n", digit2);
        vt[10] = digit2; 

       
        printf("Um CPF valido com esses digitos seria: ");
        for (cont = 0; cont < tam; cont++) {
            printf("%d", vt[cont]);
            if(cont==2||cont==5){
            	printf(".");
			}
			if(cont==8){
				printf("-");
			}
        }
        printf("\n");
    }
}
