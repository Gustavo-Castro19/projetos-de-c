#include <stdio.h>
#include <stdlib.h>

int main() {
    char Aluno[140];//Vari�veis do nome do aluno
    float N1,N2,N3,Media,Presenca;//1�,2�,e 3� notas, media e percentual de presen�a
    char situacao;
    printf("qual o nome do aluno?\n");
    scanf("%s",&Aluno);//busca o nome do aluno, preenche a vari�vel Aluno
    
    printf("qual a 1 nota?\n");
    scanf("%f",&N1);//busca a 1� nota
    
    printf("qual a 2 nota?\n");
    scanf("%f",&N2);//busca a 2� nota
    
    printf("qual a 3 nota?\n");
    scanf("%f",&N3);//busca a 3� nota
    
    printf("qual o total percentual de presenca desse aluno?\n");
    scanf("%f",&Presenca);//busca a presen�a total desse aluno
    
    Media=(N1+N2+N3*2)/4;//calculo da media ponderada considerando um peso 2 na N3 
    
    printf("Resultado: o aluno %s ficou com media %.2f,e teve uma frequencia de %.2f nas aulas. Portanto,esta\n ",Aluno,Media,Presenca);
    printf("digite um digito par para o aluno estar aprovado ou digite um digito impar para o aluno estar reprovado\n");
    getchar();
	situacao = getchar();
   switch(situacao){
   	     case('1'):
   	     case('3'):
   	     case('5'):
   	     case('7'):
   	     case('9'):
   	     printf("voce esta reprovado\n"); break;
   	     case('0'):
   	     case('2'):
   	     case('4'):
   	     case('6'):	
   	     case('8'):
   	     	printf("voce esta aprovado\n"); break;
   	     default: printf("n�o � um digito\n");
   	
   }
  
    system("pause");
    return 0; 
}
