#include <stdio.h>
#include <time.h>

#define DIM 30

void bubbleSort(int array[], int dimensione);
int main(int argc, char **argv)
{
    int array[DIM], i, j;
    
    time_t t;
    srand((unsigned) time(&t));
    
    for(i = 0; i < DIM; i++){
        array[i] = rand() % 40; //Valori compresi tra 0 e 39
    }
    
    bubbleSort(array, DIM);
    
    /* Output */
    
    for(i = 0; i < DIM; i++){
        printf("%d\t", array[i]);
        if(i % 5 == 0) printf("\n");
    }
	return 0;
}

/* Ordinamento bubble sort */
void bubbleSort(int array[], int dimensione){
    int aux; //Variabile ausiliaria
	int flag; //Valore booleano
    int i; //Indice
    int p;
    
    p = dimensione;
    do{
        flag = 0;
        for(i = 0; i < dimensione - 1; i++){
            if(array[i] > array[i+1]){
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
                flag = 1;
                p = i + 1;
            }
        }
        dimensione = p;
    }while(flag == 1 && dimensione > 1);
    
}


    /* Versione obsoleta
    for(j = 0; j < DIM - 1; j++){
        for(i = 0; i < DIM - 1; i++){
            if(array[i] > array[i+1]){
                aux = array[i];
                array[i] = array[i+1];
                array[i+1] = aux;
            }
        }
    } */