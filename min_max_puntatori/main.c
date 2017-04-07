/* Ordinare due numeri in modalità crescente. 

 * Attenzione! passare i parametri per riferimento
 */

#include <stdio.h>

void minMax(int *x, int *y){
    int z; //Variabile d'appoggio
    
    if(*x > *y){
        z = *x;
        *x = *y;
        *y = z;
    }
}


int main(int argc, char **argv)
{
	int x,y;
    
    printf("Caro utente,\ninserisci due valori interi.\n");
    printf("Valore 1:\t");
    scanf("%d", &x);
    printf("Valore 2:\t");
    scanf("%d", &y);
    minMax(&x, &y);
    printf("Valore 1: %d\nValore 2: %d\n", x, y);
	return 0;
}
