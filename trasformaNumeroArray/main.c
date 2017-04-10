#include <stdio.h>
/* 
 * Scrivere un programma che prende in input un intero n e restituisce in output un array di interi
 * in cui ogni componente dell’array corrisponde a una cifra del numero. La cifra più significativa di n 
 * si trova in posizione d’indice 0. Si consiglia di utilizzare funzioni di supporto.
 * Scrivere la specifica delle funzioni principali e un’opportuna funzione di test. Esempio: 123 -> {1,2,3}
 * */

/* 
 * Stampa dell'array
 * */
void stampaArray(int a[], int dim){
    int i;
    printf("Array: ");
    for(i = 0; i < dim; i++){
        printf("%d\t", a[i]);
    }
    
    printf("\n");
} 

/* Calcola il numero delle sue cifre */

int ncifre(int numero){
    int count; //Il risultato
    
    if(numero / 10 == 0){
        count = 1; //Caso base
    } else {
        count = 1 + ncifre(numero/10); //Passo induttivo
    }
    
    return count;
}

/* 
 * Funzione che memorizza all'interno dell'array le cifre
 * del numero n a partire da quella con indice i 
 * */
void arrayDaNumero(int v[], int n, int i){
    if(i == 0){
        v[i] = n;
    } else {
        v[i] = n%10;
        arrayDaNumero(v, n/10, i-1);
    }
}

/* 
 * Funzione che crea e stampa l'array i cui elementi
 * sono le cifre del numero
 * */
void numero2array(int n){
    int lungh; //Lunghezza dell'array
    lungh = ncifre(n);
    
    int vettore[lungh];
    
    arrayDaNumero(vettore, n, lungh-1);
    
    stampaArray(vettore, lungh);
}

void testNumeroArray(){
    printf("43 = ");
    numero2array(43);
    printf("1 = ");
    numero2array(1);
}
int main(int argc, char **argv)
{
    testNumeroArray();

	return 0;
}
