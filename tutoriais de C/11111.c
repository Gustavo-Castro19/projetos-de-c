#include <stdio.h>
#include <stdlib.h>

int main(){
    char digito;
    printf("qual é esse digito\n");
    scanf("%c", &digito);
    if(digito=='0') printf("o digito é 0");
    else if(digito=='1') printf("o digito é 1");//a coisa mais idiota que eu já fiz
    else if(digito=='2') printf("o digito é 2");
    else if(digito=='3') printf("o digito é 3");
    else if(digito=='4') printf("o digito é 4");
    else if(digito=='5') printf("o digito é 5");
    else if(digito=='6') printf("o digito é 6");
    else if(digito=='7') printf("o digito é 7");
    else if(digito=='8') printf("o digito é 8");
    else if(digito=='9') printf("o digito é 9");
    else printf("não é um digito");
    
    system("pause");
    return 0;
}
    

 