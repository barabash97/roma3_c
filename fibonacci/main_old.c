#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
    int primo = 1;
    int secondo = 1;
    int fibonacci = 1;
    printf("Inserisci il numero:\t");
    scanf("%d", &n);
    
    printf("%d\n", 1);
    printf("%d\n", 1);
    
    /* 1, 1, 3, 5,*/
    for(int i = 2; i < n; i++){
        fibonacci = (primo + secondo);
        printf("%d\n", fibonacci);
        primo = secondo;
        secondo = fibonacci;
    }
	return 0;
}
