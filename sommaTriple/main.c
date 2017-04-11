#include <stdio.h>


int sommaTriple(int a[], int dim);

int main(int argc, char **argv)
{
	int dim = 6;
    int array[dim];
    int i;
    
    for(i = 0; i < dim; i++){
        scanf("%d", &array[i]);
    }
    
    if(sommaTriple(array,dim)){
        printf("Somma triple: ok!.\n");
    } else {
        printf("Somma triple: no!.\n");
    }
	return 0;
}


int sommaTriple(int a[], int dim){
    int sommabile;
    
    if(dim <= 2){
        sommabile = 1;
    } else {
        sommabile = ((a[0] == a[1]+a[2]) || (a[1] == a[0] + a[2]) || (a[2] == a[1] + a[0])) && sommaTriple(a+1, dim-1);
    }
    
    return sommabile;
}