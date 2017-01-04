#include <stdio.h>

int solitario(int array[], int lunghezza, int indice);
int numeroSolitari(int interi[], int lunghezza);

int main(){
    int lunghezza; //Lunghezza della sequenza
    int i, j;
    printf("Caro utente,\ninserisci la lunghezza della sequenza.\n");
    scanf("%d", &lunghezza);
    
    int array[lunghezza]; //Sequenza
    
    /* Input della sequenza */
    printf("A questo punto digita i valori della sequenza separati dall\'invio.\n");
    for(i = 0; i < lunghezza; i++){
        printf("Valore %d = ", i+1);
        scanf("%d", &array[i]);
    }
    
    int lunghezza_nuovo_array = numeroSolitari(array, lunghezza) + lunghezza;
    int nuovo_array[lunghezza_nuovo_array];
    j = 0; //Variabile contatore per la nuova sequenza
    
    for(i = 0; i < lunghezza; i++){
        if(solitario(array, lunghezza, i)){
            nuovo_array[j] = array[i];
            j++;
            nuovo_array[j] = array[i];
            j++;
        } else {
            nuovo_array[j] = array[i];
            j++;
        }
    }
    
    /* Output */
    
    printf("\n\n########### NUOVA SEQUENZA ###########\n\n");
    printf("[");
    for(i = 0; i < lunghezza_nuovo_array; i++){
        if(i == lunghezza_nuovo_array-1){
            printf("%d", nuovo_array[i]);
        } else {
            printf("%d,", nuovo_array[i]);
        }
    }
    printf("]");
    printf("\n\n########### FINE SEQUENZA ###########\n\n");
}

/* La funzione per verificare se esiste un numero adiacente
 * Restituisce 0 o 1.*/
int solitario(int array[], int lunghezza, int indice){
    
    int flag = 0;
    
    /* C'è un intero precendente. */
    if(indice > 0){
        
        if(indice < lunghezza - 1){
            if((array[indice] != array[indice-1]) && (array[indice] != array[indice+1])){
                flag = 1;
            } else {
                flag = 0;
            }
        } else {
            if(array[indice] != array[indice-1]){
                flag = 1;
            } else {
                flag = 0;
            }
        }
        
    } else { //Non c'è un intero precedente 
        
        if(indice < lunghezza-1){
            if(array[indice] != array[indice+1]){
                flag = 1;
            } else {
                flag = 0;
            }
        } else {
            flag = 1;
        }
        
    }
    
    return flag;
}

int numeroSolitari(int array[], int lunghezza){
    int numero = 0;
    int i; 
    
    for(i = 0; i < lunghezza; i++){
        if(solitario(array, lunghezza, i)){
            numero++;
        }
    }
    
    return numero;
}