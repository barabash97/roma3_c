#include <stdio.h>
#include <string.h>
#define DIM 50
/* 
 * Scrivere un programma che prende in input una stringa non nulla di caratteri
 * e modifica la stringa mettendo i caratteri in ordine invertito, attraverso una funzione ricorsiva. */
 
void invertiStringa(char *stringa, int i, int j){
    char app;
    
    if(i < j){
        app = stringa[i];
        stringa[i] = stringa[j];
        stringa[j] = app;
        invertiStringa(stringa, i+1, j - 1);
    }
}
int main(int argc, char **argv)
{
	char stringa[DIM];
    fgets(stringa, DIM, stdin);
    strtok(stringa, "\n");
    invertiStringa(stringa, 0, strlen(stringa)-1);
    printf("%s", stringa);
	return 0;
}
