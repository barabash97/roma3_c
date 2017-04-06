/* Scrivi un programma che chiede all'utente di 
 * inserire due interi x ed y e stampa tutti gli interi positivi
 * che sono compresi fra x ed y (estremi inclusi) e che non sono divisibili per 3.*/

#include <stdio.h>

int main(int argc, char **argv)
{
    int x, y;
    
    printf("Inserisci il valore di x:\t");
    scanf("%d", &x);
    printf("Inserisci il valore di y:\t");
    scanf("%d", &y);
    
    printf("I numeri compresi tra %d e %d non sono divisibili per 3: \n", x, y);
    
    for(int i = x; i <= y; i++){
        if(i % 3 != 0){
            printf("%d\n", i);
        }
    }
    
	return 0;
}
