#include <stdio.h>
#include <time.h>

#define DIM 20

int partition(int *a, int dimensione);
void quickSort(int *array, int dimensione);
void scambia(int *array, int i, int j){
    int aux;
    
    aux = array[i];
    array[i] = array[j];
    array[j] = aux;
}
int main(int argc, char **argv)
{
	int array[DIM], i;
    
    time_t t;
    srand((unsigned) time(&t));
    
    for(i = 0; i < DIM; i++){
        array[i] = rand() % 51 + (-25);
    }
    
    quickSort(array, DIM);
    
    printf("Elenco elementi ordinati.\n");
    
    for(i = 0; i < DIM; i++){
        printf("%d\t", array[i]);
        if(i > 0 && i % 2 != 0) printf("\n");
    }
    printf("\n");
	return 0;
}

int partition(int *a, int dimensione){
    int i = 0; //left
    int j = dimensione - 1; //right
    
    while(i < j){
        if(a[j] > a[0]){
            j--; 
        } else {
            if(a[i] <= a[0]){
                i++;
            } else {
                scambia(a, i, j);
            }
        }
    }
    
    return i;
}

void quickSort(int *array, int dimensione){
    /* Passo induttivo */
    if(dimensione > 1){
        int index = partition(array, dimensione);
        
        scambia(array, 0, index);
        
        quickSort(array, index);
        
        quickSort(array+index+1, dimensione -index-1);
    }
}