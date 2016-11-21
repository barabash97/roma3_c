#include <stdio.h>


int isPrimo(int primo);

int main(int argc, char **argv)
{
	int numero;
    
    printf("Inserisci il numero:\n");
    scanf("%d", &numero);
    
    if(isPrimo(numero)){
        printf("E\' un numero primo.\n");
    } else {
        printf("Non e\' un numero primo.\n");
    }
	return 0;
}

int isPrimo(int numero){
    int flag = 1;
    
    for(int i = 2; i < numero; i++){
        if(numero % i == 0){
            return flag = 0;
        }
    }
    
    return flag;
}