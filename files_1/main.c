#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char nome[30], cognome[30];
    
    char stringa[300];
    FILE *file;
    
    file = fopen("anagrafica", "r");
    int a, n;
    
    if(file == NULL){
        printf("Impossibile aprire il file.\n");
        exit(1);
    }
    
    /*printf("Inserisci i dati relativi all\'anagrafica.\n");
    
    printf("Nome:\t");
    fgets(nome, 30, stdin);
    nome[strlen(nome)-1] = '\0';
    
    printf("Cognome:\t");
    fgets(cognome, 30, stdin);
    
    fprintf(file, "Nome:%s;Cognome:%s", nome, cognome);
    cognome[strlen(cognome)-1] = '\0';
    
    */
    
    while(!feof(file)){
        fscanf(file,"%s\t", stringa);
        printf("%s\n", stringa);
    }
    
    printf("\n\nIndice 0 : %s", stringa[0]);
    
    fclose(file);
	return 0;
}
