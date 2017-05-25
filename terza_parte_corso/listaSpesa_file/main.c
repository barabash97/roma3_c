#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    FILE* fp = fopen("lista spesa", "a+");

    if(fp == NULL) {
        printf("File non esiste.\n");
        return 0;
    }

    int numero;
    char articolo[30];
    int select = 1;

    do {

        printf("Quale articolo vuoi comprare? ");
        fgets(articolo, 30, stdin);
        articolo[strlen(articolo) - 1] = '\0';
        fprintf(fp, "%s ", articolo);
        printf("Quantita\'? ");
        scanf("%d%*c", &numero);
        fprintf(fp, "%d\n", numero);
        printf("Vuoi continuare a scrivere la lista di spesa?\n");
        printf("[1] => SI\t[0] => NO\n");
        scanf("%d%*c", &select);
    } while(select == 1);

    fclose(fp);
    return 0;
}
