#include <stdio.h>
#include <string.h>


int palindromaRec(char *s, int inf, int sup){
    int result;
    
    if(inf >= sup){
        result = 1;
    } else {
        result = (s[inf] == s[sup]) && palindromaRec(s, inf+1, sup-1);
    }
    
    return result;
}
int main(int argc, char **argv)
{
	char stringa[50];
    
    printf("Inserisci la frase palindroma.\n");
    fgets(stringa, 50, stdin);
    stringa[strlen(stringa)-1] = '\0';
    int palindroma = palindromaRec(stringa, 0, strlen(stringa)-1);
    
    if(palindroma){
        printf("E' palindroma.\n");
    } else {
        printf("Non %c palindroma.\n", 138);
    }
	return 0;
}
