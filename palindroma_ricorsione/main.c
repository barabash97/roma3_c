#include <stdio.h>
#include <string.h>

int palindroma(char *str, int start, int finish);

int main(int argc, char **argv)
{
	char stringa[7];
    
    printf("Caro utente,\ninserisci la frase per verificare la funzione palindroma.\n");
    fgets(stringa, 7, stdin);
    
    int result = palindroma(stringa, 0, strlen(stringa)-1);
    
    printf("%d", result);
    if(result > 0){
        printf("Ok.\n");
    } else {
        printf("False.\n");
    }
    
	return 0;
}

int palindroma(char *str, int start, int finish){
    int conta;
    
    if(start >= finish){
        conta = 1;
    } else {
        conta = (str[start] == str[finish]) && palindroma(str, start+1, finish-1);
    }
    
    return conta;
}