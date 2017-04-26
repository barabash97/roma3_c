#include <stdio.h>

float potenza(float n, int x);
int main(int argc, char **argv)
{
	int x;
    float n;
    
    printf("Base: ");
    scanf("%f", &n);
    printf("Esponente: ");
    scanf("%d", &x);
    
    printf("Risultato %d.\n", (int) potenza(n,x));
	return 0;
}

float potenza(float n, int x){
    float res;
    
    if(x == 0){
        res = 1;
    } else {
        res = n * potenza(n, x-1);
    }
    
    return res;
}