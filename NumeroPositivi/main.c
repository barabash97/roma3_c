#include <stdio.h>
#define DIM 5

/* Calcolo numeri positivi */

int numeroPositivi(int a[], int dim){
    int count;
    if(dim == 0){
        count = 0;
    } else {
        if(a[dim-1] > 0){
            count = 1 + numeroPositivi(a, dim-1);
        } else {
            count = numeroPositivi(a, dim - 1);
        }
    }
    
    return count;
}
int main(int argc, char **argv)
{
	int array[DIM];
    int i;
    
    printf("Inserisci i numeri.\n");
    for(i = 0; i < DIM; i++){
        scanf("%d", &array[i]);
    }
    
    printf("Numeri positivi %d.\n", numeroPositivi(array, DIM));
	return 0;
}
