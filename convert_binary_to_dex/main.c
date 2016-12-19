/* 
 * File:   main.c
 * Author: barabash97@gmail.com
 * Github: github.com/barabash97
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int convertBinaryToDex(int array[], int lunghezza);
int main(int argc, char** argv) {
    
    int lunghezza; //Dimensione array
    printf("Caro utente,\ninserisci la lunghezza dell\'array.\n");
    scanf("%d", &lunghezza);
    
    int array[lunghezza];
    int i; //Indice dell'array
    
    printf("Bene. Inserisci %d valori interi compresi tra 0 e 1.\n", lunghezza);
    
    /* INPUT */
    for(i = 0; i < lunghezza; i++){       
        /* Controllo se il valore inserito è 0 o 1. */
        do{
            printf("\nValore %d:\t", i+1);
            scanf("%d", &array[i]);
        }while(array[i] < 0 || array[i] > 1);
    }
    
    /* OUTPUT */
    
    printf("\n########################################################\n");
    printf("\nIl risultato dell\'operazione e\': %d.\n", convertBinaryToDex(array, lunghezza));
    printf("\n########################################################\n");

    return 0;
}

/* Converte un'array con i valori binari in un valore decimale naturale. */
int convertBinaryToDex(int array[], int lunghezza){
    if(lunghezza == 0){
        return 0;
    }
    
    int somma = 0; //Accumulazione
    int i;
    
    for(i = 0; i < lunghezza; i++){
        somma += array[i] * pow(2, lunghezza-i-1);
    }
    return somma;
}


