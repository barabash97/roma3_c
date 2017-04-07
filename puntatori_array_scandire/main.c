#include <stdio.h>

int main(int argc, char **argv)
{
	int lunghezza = 6;
    int array[lunghezza];
    int *puntatore = array;
    int i;
    
    for(i = 0; i < lunghezza; i++){
        array[i] = i+1;
    }
    
    for(i = 0; i < lunghezza; i++){
        //printf("%d\t", (*puntatore+i));
        printf("%d\t", i[puntatore]);
    }
	return 0;
}
