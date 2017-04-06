#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generatore(int limit);
int isPrimo(int p, int limit);

int main(int argc, char **argv)
{
    int n_random, limit = 100;
    int n = 0;
    int i = 1;
    
    
    do{
        printf("Inserisci il numero:\n");
        scanf("%d", &n);
    }while(n <= 0);
    
    while(i <= n){
        n_random = generatore(limit);
        if(isPrimo(n_random, limit)){
            printf("Il numero primo e\': %d\n", n_random);
            i++;
        }
    }
    
}

int generatore(int limit){
    time_t t;
    srand((unsigned) time(&t));
    return rand() % limit+1;

}

int isPrimo(int p, int limit){
    int flag = 1;

    for(int i = 2; i < limit; i++){
        unsigned r = p % i;

        if (r == 0) {
            flag = 0; 
        }
    }
    
    return flag;
}