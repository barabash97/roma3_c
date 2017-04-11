#include <stdio.h>
#include <string.h>

void tuttiMinuscoli(char *stringa){
    int i = 0;
    
    while(stringa[i] != '\0'){
        if(stringa[i] >= 'A' && stringa[i] <= 'Z'){
            stringa[i] += 'a' - 'A';
        }
        i++;
    }
}
int main(int argc, char **argv)
{
	char stringa[50];
    
    fgets(stringa, 50, stdin);
    
    stringa[strlen(stringa)-1] = '\0';
    tuttiMinuscoli(stringa);
    printf("\n%s\n", stringa);
	return 0;
}
