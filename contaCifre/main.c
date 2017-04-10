#include <stdio.h>
#define DIM 50

/* 
 * SPECIFICA DELLA FUNZIONE CONTACIFRE
 * INPUT: un numero intero n
 * PRE-CONDIZIONE: N >= 0
 * OUTPUT: res in numero intero
 * POST-CONDIZIONE: rest >= 1 => il numero di cifre di n
 * */
int contaCifre(int n);

int main(int argc, char **argv)
{
    int numero;
    printf("Ciao utente,\ninserisci un numero.\n");
    scanf("%d", &numero);
    printf("Numero cifre %d\n", contaCifre(numero));
	return 0;
}

int contaCifre(int n){
    int res;
    
    if(n / 10 == 0){
        res = 1; //Caso base
    } else {
        //Il numero ha più cifre
        res = 1 + contaCifre(n/10); //Passo ricorsivo
    }
    
    return res;
}