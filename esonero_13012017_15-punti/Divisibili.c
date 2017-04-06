#include <stdio.h>

int multipli(int array[], int lunghezza);

int main(){
    
    int lunghezza;
    int i;
    
    printf("Inserisci la lunghezza dell\'array.\n");
    scanf("%d", &lunghezza);
    
    int array[lunghezza];
    printf("Inserisci i valori dell\'array.\n");
    
    for(i = 0; i < lunghezza; i++){
        printf("Valore %d = \t", i+1);
        scanf("%d", &array[i]);
    }
    
    printf("\n\n");
    
    if(multipli(array, lunghezza)){
        printf("Ci sono multipli.\n");
    } else {
        printf("Non ci sono multipli.\n");
    }
}

int multipli(int array[], int lunghezza){
    int flag = 0;    
    int i,j;
    
    for(i = 0; i < lunghezza-1 && !flag; i++){
        for(j = i+1; j < lunghezza && !flag; j++){
            if((array[i] % array[j] == 0) || (array[j] % array[i] == 0)) flag = 1;
        }
    }
    
    return flag;
}