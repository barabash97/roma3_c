#include <stdio.h>
#include <time.h>

#define DIM 30
void insertionSort(int *array, int dimensione);

int main(int argc, char **argv)
{
	int array[DIM], i;
    time_t t;
    
    srand((unsigned) time(&t));
    
    for(i = 0; i < DIM; i++){
        array[i] = rand() % 400;
    }
    
    insertionSort(array, DIM);
    
    for(i = 0; i < DIM; i++){
        printf("%d\t", array[i]);
        if(i % 5 == 0) printf("\n");
    }
    
    printf("\n");
	return 0;
}

void insertionSort(int *array, int dimensione){
    int aux;
    int indice; //Indice prossimo elemento da ordinare
    int posto; //Indice al quale disporre elemento
    
    for(indice = 1; indice < dimensione; indice++){
        aux = array[indice];
        posto = indice; //Primo candidato
        
        while(posto > 0 && array[posto-1] > aux){
            array[posto] = array[posto-1];
            posto--;
        }
        array[posto] = aux;
    }
}