/* 
 * Scrivi un programma che chiede all'utente di inserire i numeri e fermare se l'utente inserisce
 * il numero 0. Stampare un messaggio se sono stati inseriti due numeri positivi consecutivi
 */
#include <stdio.h>

int main(int argc, char **argv)
{
	int numero;
    int ultimoPositivo = 0;
    
    do {
        printf("Inserisci un numero:\n");
        scanf("%d", &numero);
        
        if(numero % 2 == 0){
            if(ultimoPositivo == 1){
            printf("\n\n#####################################\n\n");
            printf("Inseriti due numeri positivi consecutivi.");
            printf("\n\n#####################################\n\n");
        } else {
            ultimoPositivo++;
        }
        } else {
            ultimoPositivo = 0;
        }
        
    } while(numero != 0);
	return 0;
}
