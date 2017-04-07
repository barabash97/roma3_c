#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    int dim = 20;
    char stringa1[dim], stringa2[dim];
    
    printf("Inserisci la stringa 1: ");
    fgets(stringa1, dim, stdin);
    
    printf("Inserisci la stringa 2: ");
    fgets(stringa2, dim, stdin);
    
    if(strcmp(stringa1, stringa2) == 0){
        printf("uguali.");
    } else if(strcmp(stringa1, stringa2) < 0){
        printf("Stringa 1 è maggiore.");
    } else {
        printf("Stringa 2 è minore.");
    }
}
