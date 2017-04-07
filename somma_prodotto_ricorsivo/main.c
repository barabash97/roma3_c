/* Verificare che ci sia un numero il cui somma/prodotto è uguale alla somma dei due numeri precendenti
La verifica dovrà essere fatta con un algoritmo ricorsivo

 */

#include <stdio.h>
#define DIM 6

int sommaProdottoRicorsivo(int array[], int lunghezza, int dimensione);

int main(int argc, char **argv)
{
	int array[DIM];
    int i;
    
    printf("Caro utente,\ninserisci i valori dell\'array.\n");
    
    
    for(i = 0; i < DIM; i++){
        scanf("%d", &array[i]);
    }
    
    if(sommaProdottoRicorsivo(array, DIM, 0)){
        printf("Esiste.\n");
    } else {
        printf("Non esiste.\n");
    }
    
    
	return 0;
}

int sommaProdottoRicorsivo(int array[], int lunghezza, int indice){
    
    int risultato;
    
    if(indice >= lunghezza-2) {
        risultato = 0;
    } else {
        risultato = (array[indice] + array[indice+1] == array[indice+2])
        ||(array[indice] * array[indice+1] == array[indice+2])
        ||sommaProdottoRicorsivo(array, lunghezza, indice+1);
    }
    
    return risultato;
    
}