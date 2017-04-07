#include <stdio.h>

int mcdRec(int n1, int n2);

int main(int argc, char **argv)
{
	int n1 = 0, n2 = 0;
    
    printf("Inserisci i valori.\n");
    printf("Inserisci valore 1:\t");
    scanf("%d", &n1);
    printf("Inserisci valore 2:\t");
    scanf("%d", &n2);
    
    /* OUTPUT */
    
    printf("MCD tra %d e %d e\' %d", n1, n2, mcdRec(n1, n2));
	return 0;
}

int mcdRec(int n1, int n2){
    int mcd;
    
    if(n1 == n2){
        mcd = n1;
    } else {
        if(n1 > n2){
            mcd = mcdRec(n2, n1-n2);
        } else {
            mcd = mcdRec(n1, n2-n1);
        }
    }
    
    return mcd;
}