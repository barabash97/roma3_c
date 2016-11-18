/*  Scrivi un programma che chiede all'utente di inserire un numero intero n 
 * e stampa i primi n interi della sequenza di Fibonacci. 
 * La sequenza di Fibonacci 
 * 1,1,2,3,5,8,13,21,34... è tale che i primi due numeri della sequenza sono pari ad uno 
 * ed ogni altro numero è pari alla somma dei due precedenti. 
*/

#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
    int fibonacci;
    int primo = 1, secondo = 1;
    
    /* Inizializzazione */
    printf("Caro utente,\ninserisci il numero di volte per stampare la successione di Fibonacci:\t");
    scanf("%d", &n);
    
    /* Processing e output */ 
    for(int i = 0; i < n; i++){
        if(i <= 1){ // Le prime due sono uguali a 1
            fibonacci = 1;
        } else {
            fibonacci = primo + secondo; // Somma dei due numeri precedenti
            primo = secondo;
            secondo = fibonacci;
        }
        
        printf("%d\n", fibonacci); //Stampa
    }
	return 0;
}
