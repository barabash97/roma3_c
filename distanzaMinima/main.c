#include <stdio.h>

int distanza(int a, int b){
    int result;
    
    if(a >= b){
        result = a - b;
    } else {
        result = b - a;
    }
    
    return result;
}

int distanzaMinima(int a[], int dim){
    int distanzaMin;
    int dist;
    int dist2;
    
    if(dim == 2){
        distanzaMin = distanza(a[0], a[1]);
    } else {
        dist = distanzaMinima(a+1, dim-1);
        dist2 = distanza(a[0], a[1]);
        
        if(dist < dist2){
            distanzaMin = dist;
        } else {
            distanzaMin = dist2;
        }
    }
    
    return distanzaMin;
}
int main(int argc, char **argv)
{
	int dim = 6;
    int array[dim];
    int i;
    
    for(i = 0; i < dim; i++){
        scanf("%d", &array[i]);
    }
    
    printf("Distanza minima %d.\n", distanzaMinima(array, dim));
	return 0;
}
