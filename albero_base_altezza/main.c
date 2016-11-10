#include <stdio.h>

int main(int argc, char **argv)
{
	int base, altezza;
    
    printf("Inserisci la base:\n");
    scanf("%d", &base);
    printf("Inserisci altezza:\n");
    scanf("%d", &altezza);
    
    printf("Ecco il tuo rettangolo:\n");
    
    for(int i = 1; i <= altezza; i++){
        for(int j  = 1; j <= base; j++){
            printf("*");
        }
        printf("\n");
    }
}
