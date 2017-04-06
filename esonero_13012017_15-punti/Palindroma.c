#include <stdio.h>

int palindroma(int array[], int lunghezza);

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
    
    if(palindroma(array, lunghezza)){
        printf("\nVero.\n");
    } else {
        printf("\nFalse.\n");
    }
}

int palindroma(int array[], int lunghezza){
    int i;
    
    int flag = 1;
    
    for(i = 0; i < lunghezza/2 && flag; i++){
        if(array[i] != array[lunghezza-i-1]) flag = 0;
    }
     
    return flag;
}