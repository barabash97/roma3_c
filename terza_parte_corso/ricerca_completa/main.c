#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 30
int main(int argc, char **argv)
{
    /* Dichiarazione delle variabili */
	int array[DIM], i;
    int numero;
    time_t t;
    
    /* Generazione di valori casuali compresi tra 0 e 299 */
    srand((unsigned) time(&t));
    
    for(i = 0; i < DIM; i++){
        array[i] = rand() % 300;
    }
    
    /* Stampa valori generati */
    for(i = 0; i < DIM; i++){
        printf("%d ", array[i]);
        if(i % 5 == 0) printf("\n");
    }
    printf("\n");
    printf("Inserisci il valore per verificare la sua esistenza all\'interno dell\'array.\n");
    printf("Valore:\t");
    scanf("%d", &numero);
    
    /* Ricerca completa */
    i = 0; //Inizializzazione a zero
    while(numero != array[i] && i < DIM-1) ++i;
    
    /* Controllo finale se il valore è presente all'interno dell'array */
    if(numero == array[i]){
        printf("Il valore ricercato e\' presente all\'interno dell\'array.\n");
    } else {
        printf("Il valore ricercato non e\' presente all\'interno dell\'array.\n");
    }
    
	return 0;
}
