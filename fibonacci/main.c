#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
    int fibonacci;
    int primo = 1, secondo = 1;
    
    printf("Caro utente,\ninserisci il numero per stampare la successione di Fibonacci:\t");
    scanf("%d", &n);
    
    /* Stampa */ 
    for(int i = 0; i < n; i++){
        if(i <= 1){ 
            fibonacci = 1;
        } else {
            fibonacci = primo + secondo; // Somma dei due numeri precedenti
            primo = secondo;
            secondo = fibonacci;
        }
        
        printf("%d\n", fibonacci);
    }
	return 0;
}
