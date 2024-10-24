#include <stdio.h>
#include <stdlib.h>


int CalculoCpf(int cpf[], int tamanho) {
    int soma = 0,j;
    int multi[10];
    

    // Define os pesos de acordo com o tamanho do CPF
    if (tamanho == 9) {
        multi[0] = 10; 
        for (j = 1; j < 9; j++) {
            multi[j] = 10 - j;
        }
    } else if (tamanho == 10) {
        multi[0] = 11;
        for (j = 1; j < 10; j++) {
            multi[j] = 11 - j;
        }
    } else {
        return -1; // Retorna um valor de erro para tamanhos inv�lidos
    }

    // Calcula a soma com os pesos
    for (j = 0; j < tamanho; j++) {
        soma += multi[j] * cpf[j];
    }

    soma = 11 - (soma % 11);

    // Se o resultado for 10 ou 11, considera como 0 (d�gito verificadores)
    return (soma >= 10) ? 0 : soma; 
}

int main() {
    char cpf[12]; // CPF como string
    int dig[11]; // Para armazenar os d�gitos do CPF
    int digito1, digito2, i; // Vari�veis para os d�gitos verificadores

    printf("Digite os 9 primeiros digitos do seu CPF (apenas numeros): ");
    scanf("%11s", cpf); // L� at� 11 caracteres

    // Converte os 9 primeiros d�gitos do CPF em inteiros
    for (i = 0; i < 9; i++) {
        if (cpf[i] < '0' || cpf[i] > '9') {
            printf("Erro:CPF invalido.\n");
            return 1;
        }
        dig[i] = cpf[i] - '0'; // Converte cada caractere em inteiro
    }

    // Calcula os d�gitos verificadores
    digito1 = CalculoCpf(dig, 9);
    dig[9] = digito1; // Armazena o primeiro d�gito verificador
    digito2 = CalculoCpf(dig, 10);
    dig[10] = digito2; // Armazena o segundo d�gito verificador
    cpf[10] = dig[9];
    cpf[11] = dig[10];
    // Exibe os d�gitos verificadores calculados
    printf("Digitos verificadores calculados: %d%d\n", digito1, digito2);
    printf("o CPF eh: %s",cpf);

   

    return 0;
}
