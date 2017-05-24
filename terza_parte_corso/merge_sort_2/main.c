#include <stdio.h>
#include <time.h>

#define DIM 10

void mergeSort(int* array, int dimensione);
void merge(int* a, int l, int* b, int m, int* c);

int main(int argc, char** argv)
{
    int array[DIM], i;

    time_t t;

    srand((unsigned)time(&t));

    for(i = 0; i < DIM; i++) {
        array[i] = rand() % 551 + (-225);
    }
    
    mergeSort(array, DIM);
    
    printf("Stampa array ordinato.\n");
    
    for(i = 0; i < DIM; i++){
        printf("%d\t", array[i]);
        if(i > 0 && i % 2 != 0) printf("\n");
    }
    
    printf("\n");
    return 0;
}

void mergeSort(int* array, int dimensione)
{
    int i;
    /* Passo ricorsivo */

    if(dimensione >= 2) {
        int l = (dimensione + 1) / 2;
        int a[l];
        for(i = 0; i < l; i++)
            a[i] = array[i];
        mergeSort(a, l);

        int m = (dimensione + 1) / 2;
        int b[l];
        for(i = 0; i < m; i++)
            b[i] = array[l + i];
        mergeSort(b, m);

        merge(a, l, b, m, array);
    }

    /* Passo base*/
}

void merge(int* a, int l, int* b, int m, int* c)
{
    int i = 0;
    int j = 0;

    while(i < l && j < m) {
        if(a[i] <= b[j]) {
            c[i + j] = a[i];
            i++;
        } else {
            c[i + j] = b[j];
            j++;
        }
    }

    if(i >= l) {
        for(; j < m; j++)
            c[i + j] = b[j];
    } else {
        for(; i < l; i++)
            c[i + j] = a[i];
    }
}
