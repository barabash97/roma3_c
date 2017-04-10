#include <stdio.h>
#define DIM 6

int consecutiviUguali(int a[], int dim){
    int flag;
    
    if(dim <= 1){
        flag = 0;
    } else {
        if(a[0] == a[1]){
            flag = 1;
        } else {
            flag = consecutiviUguali(a+1, dim-1);
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
    
    if(consecutiviUguali(array, DIM)){
        printf("Esistono consecutivi uguali.\n");
    } else{
        printf("Non esistono consecutivi uguali.\n");
    }
	return 0;
}
