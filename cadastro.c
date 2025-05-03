#include <stdio.h>


typedef struct{
    char nome[60];
    int matricula;
}Cad;


int main(){
    Cad new_person;

    puts("qual a matricula dessa pessoa?");
    scanf("%d",&new_person.matricula);
    while(getchar()!='\n' && getchar()!=EOF) continue;

    puts("qual o nome?");
    fgets(new_person.nome,60,stdin);

    FILE *fp;
    fp=fopen("cad.txt","r");
    if(fp==NULL){
        fp=fopen("cad.txt","w");
        if(fp==NULL){
            perror("error ao abrir arquivo");
        }
        fputs("matricula, nome\n",fp);
        fclose(fp);
    }
    else{
        fclose(fp);
    }
    fp=fopen("cad.txt","a");
    if(fp==NULL){
        perror("error ao abrir o arquivo");
        return -1;
    }
    fprintf(fp,"%d %s",new_person.matricula,new_person.nome);
    fclose(fp);
    return 0;
}