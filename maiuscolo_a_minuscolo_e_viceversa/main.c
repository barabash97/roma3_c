#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DIM 60

void toUpperOrLower(char *stringa);
int main(int argc, char **argv)
{
	char stringa[DIM];
    
    printf("Caro utente,\ninserisci una frase.\n");
    printf("Frase:\t");
    fgets(stringa, DIM, stdin);
    toUpperOrLower(stringa);
    printf("%s", stringa);
	return 0;
}

void toUpperOrLower(char *stringa){
    int i = 0;
    while(stringa[i] != '\0'){
        if(stringa[i] >= 'a' && stringa[i] <= 'z'){
            stringa[i] = toupper(stringa[i]);
        } else {
            stringa[i] = tolower(stringa[i]);
        }
        i++;
    }
}