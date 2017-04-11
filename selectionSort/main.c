#include <stdio.h>

void stampaArray(int array[], int dim);
void scambia(int array[], int i, int j){
    int app; //Variabile d'appoggio
    
    app = array[i];
    array[i] = array[j];
    array[j] = app;
}
void selectionSort(int a[], int dim);
int main(int argc, char **argv)
{
	int dim = 6;
    int array[dim];
    int i;
    
    printf("Caro utente,\ninserisci la sequenza di interi in modo non ordinato.\n");
    
    for(i = 0; i < dim; i++){
        printf("Valore %d:\t", i+1);
        scanf("%d", &array[i]);
    }
    
    selectionSort(array, dim);
    
    stampaArray(array,dim);
	return 0;
}

void selectionSort(int array[], int dim){
    int minimo, indice;
    int i,j;
    
    for(i = 0; i < dim-1; i++){
        indice = i;
        minimo = array[i];
        
        for(j = i + 1; j < dim; j++){
            if(array[j] < minimo){
                minimo = array[j];
                indice = j;
            }
        }
        
        scambia(array, i, indice);
        
    }
}

void stampaArray(int array[], int dim){
    int i;
    
    printf("Array con %d elementi.\n", dim);
    for(i = 0; i < dim; i++){
        printf("%d ", array[i]);
    }
    
    printf("\n");
}