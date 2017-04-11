#include <stdio.h>

/* Prototipo */
void selectionSortRecursive(int array[], int dim);

void stampaArray(int array[], int dim);

void scambia(int array[], int i, int j);

void selectionSort(int array[], int dim);

int indiceMinimo(int array[], int base, int n);

void testRicorsione();

/* Main */
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
    
    selectionSortRecursive(array,dim);
    
    stampaArray(array, dim);
    
    printf("\n\n");
    testRicorsione();
	return 0;
}

/* Funzioni s*/
void selectionSort(int array[], int dim){
    for(int i = 0; i < dim - 1; i++){
        scambia(array, i, indiceMinimo(array, i, dim));
    }
}

void selectionSortRecursive(int array[], int dim){
    if(dim > 1){
        scambia(array, 0, indiceMinimo(array, 0, dim));
        selectionSortRecursive(array+1, dim-1);
    }
}

int indiceMinimo(int array[], int base, int n){
    int indice;
    int minimo;
    
    indice = base;
    minimo = array[base];
    
    for(int i = base + 1; i < n; i++){
        if(array[i] < minimo){
            indice = i; 
            minimo = array[i];
        }
    }
    
    return indice;
}

void stampaArray(int array[], int dim){
    int i;
    
    printf("Array con %d elementi.\n", dim);
    for(i = 0; i < dim; i++){
        printf("%d ", array[i]);
    }
    
    printf("\n");
}

void scambia(int array[], int i, int j){
    int app; //Variabile d'appoggio
    
    app = array[i];
    array[i] = array[j];
    array[j] = app;
}


/* Funzione di TEST */
void testRicorsione(){
    int a1[6] = {-1, 3, -2, 0, 45, 1};
    selectionSortRecursive(a1, 6);
    stampaArray(a1, 6);
}