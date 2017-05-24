#include <stdio.h>
#include <time.h>

#define DIM 2

void merge(int* a, int l, int* b, int m, int* c);
void mergeSort(int* array, int dimensione);

int main(int argc, char** argv)
{
    int array[DIM], i;

    time_t t;
    srand((unsigned)time(&t));

    for(i = 0; i < DIM; i++) {
        array[i] = rand() % 51 + (-25);
    }

    mergeSort(array, DIM);

    printf("\nElenco elementi ordinati.\n");

    for(i = 0; i < DIM; i++) {
        printf("%d\t", array[i]);
        if(i > 0 && i % 2 != 0)
            printf("\n");
    }
    printf("\n");
    return 0;
}

/* Funzione che fonde due array in un terzo di dimensione l+n */
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

/* Algoritmo di ordinamente MERGE-SORT */

void mergeSort(int* array, int dimensione)
{

    int i;

    if(dimensione >= 2) { // Passo induttivo

        /* Sottosequenza 1 */
        int l = (dimensione + 1) / 2; // Crea la prima sequenze e ordina
        int a[l];
        for(i = 0; i < l; i++)
            a[i] = array[i];
        mergeSort(a, l);

        /* Sottosequenza 2 */

        int m = dimensione / 2;
        int b[m];

        for(i = 0; i < m; i++)
            b[i] = array[i + l];
        mergeSort(b, m);

        /* Fondi le sequenze */

        merge(a, l, b, m, array);
    }

    /* Caso case n <= 1. la sequenza è ordinata */
}