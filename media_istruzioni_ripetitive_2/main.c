#include <stdio.h>

int main(int argc, char **argv)
{
	int n = 0;
    int somma = 0;
    int incremento = 0;
    float media;
    
    do{
        printf("Inserisci n:\n");
        scanf("%d", &n);
        if(n > 0){
            somma = somma + n;
            incremento++;
        }
    } while (n > 0);
    
    media = somma / incremento;
    
    printf("Media: %f\n", media);
	return 0;
}
