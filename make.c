#include <stdio.h>
 #include <stdlib.h>
  int main(){
     FILE *stream;
      char line[99];
       FILE *stream2;
        stream=fopen("helloworld.txt","r+");
         if(stream==NULL) {
             printf("\r\nerro ao abrir o arquivo");
              } while(fgets(line,sizeof(line),stream)!=NULL){
                 printf("%s",line);
                  } fseek(stream,0,SEEK_SET); 
                  /*fputs("hello world",stream); 
                  int x=10; 
                  fprintf(stream,("\ro valor de x eh %d"),x); 
                  fclose(stream);*/ 
                  return 0; 
                   }
