#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[60];
    int matri;
} cad;

int main(void)
{
    cad Cad1;
    FILE *fp;
    int key_val;

    puts("qual matricula voce quer:");
    scanf("%d", &key_val);
    while (getchar() != '\n')
        continue;
    fp = fopen("cad.txt", "r");
    if (fp == NULL)
    {
        perror("cadastro nao achado");
        return 1;
    }
    char text[100];
    char *pars;
    fgets(text, 100, fp);
    while (fgets(text, 100, fp) != NULL)
    {
        pars = strtok(text, " ");
        Cad1.matri = atoi(pars);

        pars = strtok(NULL, "\n");
        strncpy(Cad1.nome, pars, 60);
        if (Cad1.matri == key_val)
        {
            puts("esse eh todo o cadastro:");
            printf("%d %s", Cad1.matri, Cad1.nome);
            return 0;
        }
    }
    fclose(fp);
    puts("infelizmente nao achamos seu cadastro :/");
    return 1;
}