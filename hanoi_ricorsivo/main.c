#include <stdio.h>

int count = 0; //Contatore di mosse
void hanoi(int n, int sorg, int app, int dest);

void muoviUnDisco(int sorg, int dest);

int main(int argc, char **argv)
{
	/* Dichiarazione delle variabili */
    int dischi;
    
    /* Input */
    printf("Caro utente,\nsono un robot che risolve il probleme della torre di Hanoi. Quanti dischi?.\n");
    scanf("%d", &dischi);
    
    /* Elaborazione e stampa del risultato */
    printf("Ecco la soluzione.\n");
    hanoi(dischi,1,2,3);
    printf("Count: %d", count);
	return 0;
}

/* Calcola il problema delle torri di Hanoi in modo ricorsivo */
void hanoi(int n, int sorg, int app, int dest){
    if(n == 1){
        muoviUnDisco(sorg, dest); //Caso base
    } else {
        hanoi(n-1, sorg, dest, app); //Passo induttivo
        muoviUnDisco(sorg, dest);
        hanoi(n-1, app, sorg, dest);
    }
}

void muoviUnDisco(int sorg, int dest){
    printf("Muovo un disco dalla pila %d alla pila %d\n", sorg, dest);
    count++;
}