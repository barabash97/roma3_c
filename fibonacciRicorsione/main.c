#include <stdio.h>

int fibonacciRec(int n){
    int result;
    
    if(n == 0 || n == 1){
        result = 1;
    } else {
        result = fibonacciRec(n-1) + fibonacciRec(n-2);
    }
    return result;
}
int main(int argc, char **argv)
{
	int n = 6;
    
    printf("Fibonacci %d.\n", fibonacciRec(n));
	return 0;
}
