#include <stdio.h>

void insertionSort(int array[], int dim);
void stampaArray(int array[], int dim);

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
    
    insertionSort(array, dim);
    stampaArray(array, dim);
	return 0;
}

void stampaArray(int array[], int dim){
    int i;
    
    printf("Array con %d elementi.\n", dim);
    for(i = 0; i < dim; i++){
        printf("%d ", array[i]);
    }
    
    printf("\n");
}

void insertionSort(int array[], int dim){
    int app;
    int indice; //Indice prossimo elemento da ordinare
    int posto; //Indice al quale disporre un elemento
    
    for(indice = 1; indice < dim; i++){
        app = array[indice];
        posto = indice;
        
        while(posto > 0 && array[posto-1] > temp){
            array[posto] = array[posto-1];
            posto--;
        }
        
        array[posto] = app;
    }
}