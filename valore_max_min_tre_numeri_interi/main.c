/* 
 * Scrivi un programma che chiede all'utente di inserire tre numeri interi,
 li legge e stampa un messaggio che indica all'utente:
 il valore massimo ed il valore minimo fra quelli letti.
 * */

#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c;
    
    int min = 0;
    int max = 0;
    
    printf("Inserisci tre numeri interi:\n");
    
    /* Input */
    printf("Primo numero:\t");
    scanf("%d", &a);
    
    printf("Secondo numero:\t");
    scanf("%d", &b);
    
    printf("Terzo numero:\t");
    scanf("%d", &c);
    
    
    /* Processing */
    
    /* Valore massimo */
    if(a >= b && a >= c){
        max = a;
    } else if(b >= a && b >= c){
        max = b;
    } else {
        max = c;
    }
    
    /* Valore minimo */
    
     if(a <= b && a <= c){
        min = a;
    } else if(b <= a && b <= c){
        min = b;
    } else {
        min = c;
    }
    
    /* Output */
    
    printf("\n\nIl valore massimo tra i numeri %d, %d e %d e\' il valore %d\n\n", a,b, c, max);
    printf("Il valore minimo tra i numeri %d, %d e %d e\' il valore %d\n\n", a,b, c, min);
    
    
	return 0;
}
