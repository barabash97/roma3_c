/*
 * Scrivere un programma che chiede all'utente di inserire i numeri diversi da 0.
 * Trovare il minimo e il massimo fra i numeri inseriti e la somma.
 * */

#include <stdio.h>

int main(int argc, char **argv)
{
    int numero;
	int max = 0;
    int min = 0;
    int somma = 0;
    
    do {    
        printf("Inserisci un numero intero:\n");
        scanf("%d", &numero);
        
        if(max < numero){
            max = numero;
        }
        if((min == 0 || min > numero) && numero != 0){
            min = numero;
        }
        
        somma = somma + numero;
    } while(numero != 0);
    
    //OUTPUT
    
    printf("Il massimo vale: %d\n", max);
    printf("Il minimo vale: %d\n", min);
    printf("La somma vale: %d\n", somma);
	return 0;
}
