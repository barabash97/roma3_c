#include <stdio.h>

int main(int argc, char **argv)
{
	
    int a,b,c,d;
    
    int i = 0;

    printf("Caro utente, inserisci i numeri a,b,c,d.\n");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    
    if(((a==b) + (c==d) + (b!=c) + (a != d)) == 4) {
        printf("Ci sono due coppie di numeri fra loro uguali.\n"); //OK
    } else {
        i += ( (a==b) + (b == a) + (b==c) + (c==d) + (a==d));
        
        i-= (a==d);
        printf("Ci sono %d numeri fra loro uguali.\n", i);
    }
    
    printf("\n\n%d", ((a==b) + (c==d) + (b==c)));
    
	return 0;
}
