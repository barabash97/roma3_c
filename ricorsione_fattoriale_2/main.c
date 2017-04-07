#include <stdio.h>

int fattoriale(int n){
    int somma;
    
    if(n == 1) {
        somma = n;
    } else {
        somma = n * fattoriale(n-1);
    }
    
    return somma;
}
int main(int argc, char **argv)
{
	int n;
    
    printf("Caro utente,\ninserisci il numero per calcolare il fattoriale.\n");
    scanf("%d", &n);
    
    printf("Il fattoriale del numero %d e\' %d.\n", n, fattoriale(n));
	return 0;
}
