#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIM 50

int differenzaCaratteriNumerici(char *stringa);
int main(int argc, char **argv)
{
	char stringa[DIM];
    
    printf("Caro utente,\ninserisci la stringa.\n");
    fgets(stringa, DIM, stdin);
    strtok(stringa, "\n");
    
    int differenza = differenzaCaratteriNumerici(stringa);
    
    if(differenza != -1){
        printf("La differenza massima tra due caratteri numerici e\' %d.\n", differenza);
    } else{
        printf("Non ci sono due caratteri numeri per calcolare la differenza tra i due numeri.\n");
    }
	return 0;
}

/* Restituisci -1 se non ci sono due valori numerici */ 
int differenzaCaratteriNumerici(char *stringa){
    int i; //Per scandire la stringa
    int ultimoNumero; //Ultimo numero trovato
    int numeroCorrente; //Numero attuale
    int differenzaMassima; //Differenza totale
    int differenzaAttuale; //Differenza attuale tra i due numeri 
    
    differenzaAttuale = -1;
    differenzaMassima = -1;
    
    for(i = 0; i < strlen(stringa); i++){
        
        if(stringa[i] > '0' && stringa[i] < '9'){
            numeroCorrente = stringa[i] - '0';
            if(ultimoNumero != -1){
                if(numeroCorrente > ultimoNumero){
                    differenzaAttuale = numeroCorrente - ultimoNumero;
                } else {
                    differenzaAttuale = ultimoNumero - numeroCorrente;
                }
                
                if(differenzaAttuale > differenzaMassima) differenzaMassima = differenzaAttuale;
                
            }
            ultimoNumero = numeroCorrente;
        }
    }
    
    return differenzaMassima;
}
