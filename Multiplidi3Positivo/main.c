#include <stdio.h>
#define DIM 6

int Multiplodi3Positivi(int a[], int dim){
    int flag;
    
    if(dim == 0){
        flag = 0;
    } else {
        if(a[dim-1] % 3 == 0 && a[dim-1] > 0){
            flag = 1;
        } else {
            flag = Multiplodi3Positivi(a, dim-1);
        }
    }
    
    return flag;
}
int main(int argc, char **argv)
{
    int array[DIM];
    int i;
    
    for(i = 0; i < DIM; i++){
        scanf("%d", &array[i]);
    }
    
    int flag = Multiplodi3Positivi(array, DIM);
    
    if(flag){
        printf("Ci sono numeri multipli di 3.\n");
    } else {
        printf("Non ci sono numeri multipli di 3.\n");
    }
	return 0;
}
