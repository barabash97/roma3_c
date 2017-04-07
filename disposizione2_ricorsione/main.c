#include <stdio.h>

int disp(int n, int k){
    int somma;
    
    if(k == 1){
        somma = n;
    } else {
        somma = n * disp(n-1, k-1);
    } 
    return somma;
}
int main(int argc, char **argv)
{
	int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    
    printf("Disp %d", disp(n, k));
	return 0;
}
