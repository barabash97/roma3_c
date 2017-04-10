#include <stdio.h>

int trasforma(int array[], int dimensione);

void testFunzione();

int main(int argc, char **argv)
{
	testFunzione();
	return 0;
}

int trasforma(int array[], int dimensione){
    int numero;
    
    if(dimensione == 1){
        numero = array[dimensione-1];
    } else {
        numero = trasforma(array, dimensione-1) * 10 + array[dimensione-1];
    }
    printf("\nnumero %d\n", numero);
    return numero;
}

void testFunzione(){
    int a1[3] = {1,2,3};
    printf("{1,2,3} => %d", trasforma(a1, 3));
}