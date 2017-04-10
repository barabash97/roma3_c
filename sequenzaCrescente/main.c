#include <stdio.h>

int sequenzaCrescente(int a[], int dim){
    int flag;
    
    if(dim <= 1){ 
        flag = 1;
    } else {
        if(a[0] >= a[1]){
            flag = 0;
        } else {
            flag = sequenzaCrescente(a+1, dim-1);
        }
    }
    
    return flag;
}

int main(int argc, char **argv)
{
	int dim = 5;
    int array[dim];
    int i;
    
    for(i = 0; i < dim; i++){
        scanf("%d", &array[i]);
    }
    
    if(sequenzaCrescente(array, dim-1)){
        printf("Sequenza e\' crescente.\n");
    } else {
        printf("Sequenza non e\' crescente.\n");
    }
	return 0;
}
