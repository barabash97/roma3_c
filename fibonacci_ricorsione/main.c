#include <stdio.h>

int fibonacciRec(int n);

int main(int argc, char **argv)
{
	int n_sequenza;
    
    printf("Caro utente,\ninsersci il numero di successione per stampare\nla sequenza di Fibonacci.\n");
    scanf("%d", &n_sequenza);
    printf("%d", fibonacciRec(n_sequenza));
    
    /* Output */
	return 0;
}

int fibonacciRec(int n){
    int somma;
    
    if(n == 1 || n == 0){
        somma = 1;
    } else {
        somma = fibonacciRec(n-1) + fibonacciRec(n-2);
    }
    
    return somma;
}