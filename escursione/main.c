#include <stdio.h>

/* github: github.com/barabash97 */

int main()
{
	int i, dimensione, differenza;
    int max, min;
    printf("Caro utente,\ninserisci la lunghezza della sequenza dei numeri.\n");
    scanf("%d", &dimensione);
    
    int array[dimensione];
    /* Input */
    for(i = 0; i < dimensione; i++){
        printf("Il valore n.%d\t", i+1);
        scanf("%d", &array[i]);
    }
    
    printf("\n######################################################################\n");
    
    max = array[0];
    min = array[0];
    for(i = 1; i < dimensione; i++){
        
            if(max < array[i]){
                max = array[i];
            }
            
            if(min > array[i]){
                min = array[i];
            }
    }
    
    differenza = max - min;
    
    /* Output */
    printf("La differenza fra il valore massimo %d e il valore minimo %d della sequenza e\'\n", max, min);
    printf("%d", differenza);
    printf("\n######################################################################\n");
	return 0;
}
