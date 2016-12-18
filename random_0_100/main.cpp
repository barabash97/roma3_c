#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char **argv)
{
    int n_random, limit = 100, count = 0;
    int numero;
    time_t t;
    srand((unsigned) time(&t));
    n_random = rand() % limit+1;
    printf("Ho pensato un numero compreso tra 1 e 100.\n");
    printf("Ricorda che puoi digitare 0 se vuoi smettere di giocare.\n");
    do{
        printf("Indovina che numero ho pensato:\n");
        scanf("%d", &numero);
        count++;
        if(numero == n_random){
            printf("Bravo! Hai indovinato facendo %d tentativi.\n", count);
            numero = 0;
        }
    }while(numero != 0);
	return 0;
}
