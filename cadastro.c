#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{
    char nome[60];
    int matricula;
}Cad;
int verify(int matri);

int main(){
    Cad new_person;

    puts("qual a matricula dessa pessoa?");
    do{
    scanf("%d",&new_person.matricula);
    verify(new_person.matricula);
    while(getchar()!='\n' && getchar()!=EOF) continue;
  }while(verify(new_person.matricula)!=0);


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
int verify(int matri){
 FILE *fd=fopen("cad.txt","r+");
  if(fd==NULL){
    perror("algo nao esta certo?");
    return 1;
  }
 char text[50];
 char *ptr; 
  while(fgets(text,sizeof(text),fd)!=NULL){
    ptr=strtok(text," ");
    if(atoi(ptr)==matri){
      puts("essa matricula ja existe voce quer por um cadastro novo com essa mesma matricula?(digite 'y' para sim, qualquer outra letra para nao)");
      char ans;
      ans=getchar();
      if(ans=='y') return 0;
      else return 1;
    }
  }

}
