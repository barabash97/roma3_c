#include <stdio.h>

int mcdRicorsivo(int a, int b){
    int result;
    
    if(a == b){
        result = a;
    } else {
        if(a > b){
            result = mcdRicorsivo(b, a-b);
        } else {
            result = mcdRicorsivo(a, b - a);
        }
    }
    
    return result;
}
int main(int argc, char **argv)
{
	int a = 541, b = 21;
    
    printf("MCD %d.\n", mcdRicorsivo(a,b));
	return 0;
}
