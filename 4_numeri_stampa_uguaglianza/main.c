#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, c, d;
    
    int i = 0;
    
    printf("Inserisci quattro numeri interi:\n");
    
    /* Input */
    printf("Primo numero:\t");
    scanf("%d", &a);
    
    printf("Secondo numero:\t");
    scanf("%d", &b);
    
    printf("Terzo numero:\t");
    scanf("%d", &c);
    
    printf("Quarto numero:\t");
    scanf("%d", &d);
    
    /* Processing */
    
    i+=((a==b) + ((b==c) - (b == a)) + (c==d) + (d==a));
    
    /* Output */
    
    printf("\n\nCi sono esattamente %d numeri fra loro uguali.\n\n", i);
	return 0;
}
