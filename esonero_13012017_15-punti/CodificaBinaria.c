#include <stdio.h>
#include <math.h>

int lunghezzaArray(int numero);
int main(){
    int numero = -1; //Numero decimale
    int lunghezza_array;
    int i;
    int numero_decimale;
    
    while(numero < 0){
        printf("Inserisci il numero per convertirlo in binario.\n");
        scanf("%d", &numero);
    }
    
    numero_decimale = numero;
    
    lunghezza_array = lunghezzaArray(numero);
    int array[lunghezza_array];
    
    
    for(i = 0; i < lunghezza_array; i++){
        array[i] = numero % 2;
        numero = numero / 2;
    }
    
    printf("\n\n Il numero %d in binario vale:", numero_decimale);
    
    for(i = lunghezza_array-1; i >= 0; i--){
        printf("%d", array[i]);
    }
    
    
}

int lunghezzaArray(int numero){
    int potenza = 1;
    printf("\n\n#############################\n\n");
    while(((int) pow(2,potenza))-1<numero){
       
        potenza++;
         printf("%d\n", ((int) pow(2,potenza))-1<numero);
    }
    printf("\n\n#############################\n\n");
    return potenza;
}