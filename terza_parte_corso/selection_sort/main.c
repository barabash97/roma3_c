#include <stdio.h>
#include <time.h>

#define DIM 30
void scambia(int *array, int i, int j);
void selectionSort(int *array, int dimensione);

int main(int argc, char **argv)
{
	int array[DIM], i;
    time_t t;
    srand((unsigned) time(&t));
    
    for(i = 0; i < DIM; i++){
        array[i] = rand() % 100;
    }
    
    selectionSort(array, DIM);
    
    for(i = 0; i < DIM; i++){
        printf("%d\t", array[i]);
        if(i % 4 == 0) printf("\n");
    }
	return 0;
}

void scambia(int *array, int i, int j){
    int aux;
    aux = array[i];
    array[i] = array[j];
    array[j] = aux;
}

void selectionSort(int *array, int dimensione){
    int minimo; //Valore minimo
    int indice; //Indice del minimo
    
    for(int i = 0; i <= dimensione - 2; i++){
        indice = i;
        minimo = array[i];
        for(int j = i+1; j <= dimensione - 1; j++){
            if(array[j] < minimo){
                minimo = array[j];
                indice = j;
            }
        }
        scambia(array, i, indice);
    }
}