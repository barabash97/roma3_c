#include <stdio.h>

int fattorialeCalc(int n);
int main(int argc, char **argv)
{
    int n = 0;
    while(n < 1){
        printf("Caro utente,\ninserisci un intero positivo maggiore di zero.\n");
        scanf("%d", &n);
    }
    printf("Calcolo del fattoriale...\n");
    printf("Il fattoriale del numero %d vale: %d\n", n, fattorialeCalc(n));
}

int fattorialeCalc(int n){
    int fattoriale;
    
    if(n == 1){
        fattoriale = 1; //Caso base
    } else {
        fattoriale = n * fattorialeCalc(n-1); //Passo ricorsivo
    }
    
    return fattoriale; //Restituisce il risultato
}