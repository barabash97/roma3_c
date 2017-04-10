/* OK. funziona*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIM 50

int doppiaStringa(char *stringa);

int main(int argc, char **argv)
{
    /* Input */
	char stringa[DIM];
    
    
    printf("Caro utente,\ninserisci una frase.\n");
    printf("Frase:\t");
    fgets(stringa, DIM, stdin);
    
    if(doppiaStringa(stringa)){
        printf("Si e\' verificata una doppia stringa.\n");
    } else {
        printf("Non si e\' verificata una doppia stringa.\n");

    }
    
	return 0;
}

/* Esistenza universale */
int doppiaStringa(char *stringa){
    int flag = 1;
    int i, j;
    strtok(stringa, "\n");
    int lunghezza = strlen(stringa);
    j = (lunghezza / 2);
    for(i = 0; i < (lunghezza / 2) && flag; i++){
        if(stringa[i] != stringa[j]) flag = 0;
        j++;
    }
    
    return flag;
}