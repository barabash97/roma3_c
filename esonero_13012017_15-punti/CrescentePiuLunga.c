#include <stdio.h>

int crescentePiuLunga(int array[], int lunghezza);

int main(){
    int lunghezza;
    int i;
    
    printf("Lunghezza:\t");
    scanf("%d", &lunghezza);
    int array[lunghezza];
    
    printf("\nValori array.\n");
    
    for(i = 0; i < lunghezza; i++){
        printf("Valore %d = \t", i+1);
        scanf("%d", &array[i]);
    }
    
    printf("Crescente piu lunga = %d.\n", crescentePiuLunga(array, lunghezza));
}

int crescentePiuLunga(int array[], int lunghezza){
    int crescente = 1;
    int conta = 1;
    int i;
    
    for(i = 1; i < lunghezza; i++){
        if(array[i] > array[i-1]){
            conta++;
        } else {
            if(conta > crescente) crescente = conta;
            conta = 1;
        }
    }
    
    if(conta > crescente) crescente = conta;
    
    return crescente;
}