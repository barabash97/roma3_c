#include <stdio.h>
#include <time.h>

#define DIM 300

void bubbleSort(int* array, int dimensione);

int main(int argc, char** argv)
{
    int array[DIM], i;

    time_t t;
    srand((unsigned)time(&t));

    for(i = 0; i < DIM; i++) {
        array[i] = rand() % 301 + (-150); //Valori compresi tra -149 e +150
    }

    printf("Elementi prima dell\'ordinamento.\n");
    for(i = 0; i < DIM; i++) {
        printf("%d\t", array[i]);
        if(i > 0 && i % 2 != 0)
            printf("\n");
    }
    printf("\n");
    bubbleSort(array, DIM);

    printf("Elementi dopo ordinamento.\n");
    for(i = 0; i < DIM; i++) {
        printf("%d\t", array[i]);
        if(i > 0 && i % 2 != 0)
            printf("\n");
    }
    printf("\n");
    return 0;
}

void bubbleSort(int* array, int dimensione)
{
    int flag, i;
    int aux;

    do {
        flag = 0;
        for(i = 0; i < dimensione - 1; i++) {
            if(array[i] > array[i + 1]) {
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                flag = 1;
            }
        }
    } while(flag == 1);
}