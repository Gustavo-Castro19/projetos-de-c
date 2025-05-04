#include <stdio.h>
#include <stdlib.h>

int main(){
    char pontuar;
    printf("digite um digito\n");
    pontuar=getchar();
    switch(pontuar){
        case'.':
        printf("ponto\n");
        case',':
        printf("virgula\n");
        case':':
        printf("dois pontos\n"); 
        case';':
        printf("ponto e virgula\n");
        case'"':
        printf("aspas\n");
        default:
        printf("não é pontuacao\n");
    }
}
