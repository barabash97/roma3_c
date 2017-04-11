#include <stdio.h>
#include <string.h>

int contaCaratteri(char *stringa, char carattere, int indice){
    int count;
    
    if(indice == strlen(stringa)){
        count = 0;
    } else {
        count = (stringa[indice] == carattere) + contaCaratteri(stringa, carattere, indice + 1);
    }
    
    return count;
}
int main(int argc, char **argv)
{
	char stringa[50];
    char carattere;
    
    fgets(stringa, 50, stdin);
    
    printf("Carattere?\n");
    scanf("%c", &carattere);
    
    printf("Caratteri count %d.\n", contaCaratteri(stringa, carattere, 0));
	return 0;
}
