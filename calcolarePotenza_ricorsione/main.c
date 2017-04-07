#include <stdio.h>


int calcPotenza(int n, int x);


int main(int argc, char **argv)
{
	int n = 0, x = -1; //Numero e esponente
    
    printf("Caro utente,\ninserisci il numero e il suo esponente.\n");
    
    while(n < 1){
        printf("Numero:\t");
        scanf("%d", &n);
    }
    
    
    while(x < 1){
        printf("Esponente:\t");
        scanf("%d", &x);
    }
    
    /* Output */
    
    printf("Potenza vale: %d", calcPotenza(n, x));
	return 0;
}

int calcPotenza(int n, int x){
    int potenza;
    
    if(x == 0){
        potenza = 1;
    } else {
        potenza = n * calcPotenza(n, x - 1);
        
    }
    
    return potenza;
}