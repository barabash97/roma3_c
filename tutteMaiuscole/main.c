#include <stdio.h>

#include <string.h>


void tutteMaiuscole(char *stringa){
    int i = 0;
    
    while(stringa[i] != '\0'){
        if(stringa[i] >= 'a' && stringa[i] <= 'z'){
            stringa[i] += 'A' - 'a';
        }
        i++;
    }
}
int main(int argc, char **argv)
{
	char stringa[50];
    
    fgets(stringa, 50, stdin);
    
    stringa[strlen(stringa)-1] = '\0';
    
    tutteMaiuscole(stringa);
    
    printf("Stringa: %s.\n", stringa);
	return 0;
}
