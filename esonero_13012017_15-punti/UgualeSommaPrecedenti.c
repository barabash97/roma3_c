#include <stdio.h>

int ugualeSommaPrecedenti(int array[], int lunghezza);

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
    
    if(ugualeSommaPrecedenti(array, lunghezza)){
        printf("\nVero.\n");
    } else {
        printf("\nFalse.\n");
    }
}

int ugualeSommaPrecedenti(int array[], int lunghezza){
    int i, j;
    
    int flag = 0;
    
    for(i = 0; i < lunghezza && !flag; i++){
        int somma = 0;
        for(j = i - 1; j >= 0; j--){
             somma += array[j];
        }
        
        if(somma == array[i]) flag = 1;
    }
     
    return flag;
}