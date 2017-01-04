#include <stdio.h>

int controlloPrefisso(int array_s[], int lunghezza_s, int array_t[], int lunghezza_t);

int main(int argc, char **argv)
{
	int lunghezza_s, lunghezza_t;
    int i;
    
    printf("Caro utente,\nsono un programma che controlla se l\'array s è un prefisso di t.\n");
    
    printf("Inserisci la lunghezza del vettore s.\n");
    printf("Lunghezza s = \t");
    scanf("%d", &lunghezza_s);
    
    int array_s[lunghezza_s];
    printf("Ora, inserisci i valori del vettore s.\n");
    for(i = 0; i < lunghezza_s; i++){
        printf("Valore %d = \t", i+1);
        scanf("%d", &array_s[i]);
    }
    
    printf("\nBene!\nA questo punto inserisci la lunghezza del vettore t.\n");
    printf("Lunghezza t = \t");
    scanf("%d", &lunghezza_t);
    
    int array_t[lunghezza_t];
    printf("\nOra, inserisci i valori del vettore t.\n");
    
    for(i = 0; i < lunghezza_t; i++){
        printf("Valore %d = \t", i+1);
        scanf("%d", &array_t[i]);
    }
    
    /* Output */
    printf("\n\n");
    if(controlloPrefisso(array_s, lunghezza_s, array_t, lunghezza_t)){
        printf("Il vettore s %c un prefisso del vettore t.\n", 138);
    } else {
        printf("Il vettore s non %c un prefisso del vettore t.\n", 138);
    }
    
	return 0;
}

/* Controllo che array_s è un prefisso di array_t 
 * Restituisce il valore 1 o 0 */
int controlloPrefisso(int array_s[], int lunghezza_s, int array_t[], int lunghezza_t){
    int flag = 1;
    int i;
    
    for(i = 0; i < lunghezza_s && flag; i++){
        if(array_s[i] != array_t[i]) flag = 0;
    }
    
    return flag;
}