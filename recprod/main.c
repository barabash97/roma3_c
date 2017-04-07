/* 
 * Il calcolo del prodotto di un numero senza utilizzare operatore di moltiplicazione
 * */

#include <stdio.h>

int recProd(int n1, int n2);


int main(int argc, char **argv)
{
	int n1 = 0, n2 = 0;
    
    
    /* Input dei numeri per calcolare il prodotto */
    while(n1 < 1){
        printf("Caro utente, inserisci il numero 1.\n");
        scanf("%d", &n1);
    }
    
    
    while(n2 < 1){
        printf("Caro utente, inserisci il numero 2.\n");
        scanf("%d", &n2);
    }
    
    /* Richiamo della funzione ricorsiva e stampa del risultato */
    
    printf("Il prodotto tra i numeri %d e %d e\' uguale a: %d.\n", n1, n2, recProd(n1, n2));
	return 0;
}

int recProd(int n1, int n2){
    int prod;
    
    if(n2 == 0){
        prod = 0; //Caso base
    } else {
        printf("\n\nN1: %d N2: %d\n\n", n1, n2);
        prod = n1 + recProd(n1, n2-1); //Passo ricorsivo
    }
    
    return prod;
}