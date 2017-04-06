#include <stdio.h>

int valoreAssolutoDiverso(int array[], int lunghezza);

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
    
    if(valoreAssolutoDiverso(array, lunghezza)){
        printf("\nVero.\n");
    } else {
        printf("\nFalse.\n");
    }
}

int valoreAssolutoDiverso(int array[], int lunghezza){
    int i,j;
    int flag = 1;
    
    for(i = 0; i < lunghezza-1 && flag; i++){
        for(j = i + 1; j < lunghezza && flag; j++){
            
            if(array[i] < 0) array[i] = -array[i];
            if(array[j] < 0) array[j] = -array[j];
            
            if(array[i] == array[j]) flag = 0;
        }
    }
    
    return flag;
}