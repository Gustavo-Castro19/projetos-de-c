#include <stdio.h>
#include <stdlib.h>

int main() {
    char Aluno[100];//Variáveis do nome do aluno
    float N1,N2,N3,Media,Presenca;//1ª,2ª,e 3ª notas, media e percentual de presença
    
    printf("qual o nome do aluno?\n");
    scanf("%s",&Aluno);//busca o nome do aluno, preenche a variável Aluno
    
    printf("qual a 1 nota?\n");
    scanf("%f",&N1);//busca a 1ª nota
    
    printf("qual a 2 nota?\n");
    scanf("%f",&N2);//busca a 2ª nota
    
    printf("qual a 3 nota?\n");
    scanf("%f",&N3);//busca a 3ª nota
    
    printf("qual o total percentual de presenca desse aluno?\n");
    scanf("%f",&Presenca);//busca a presença total desse aluno
    
    Media=(N1+N2+N3*2)/4;//calculo da media ponderada considerando um peso 2 na N3 
    
    printf("Resultado: o aluno %s ficou com media %.2f,e teve uma frequencia de %.2f nas aulas. Portanto,esta ",Aluno,Media,Presenca);
    
   Presenca<75||Media<7?printf("reprovado\n"):printf("aprovado\n");
  
    system("pause");
    return 0; 
}
