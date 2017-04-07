#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int *puntatore = (int *) malloc(10 * sizeof(int));
    int i;
    
    for(i = 0; i < 10; i++){
        i[puntatore] = i+1;
    }
    
    for(i = 0; i < 10; i++){
        printf("%d\t", i[puntatore]);
    }

	return 0;
}
