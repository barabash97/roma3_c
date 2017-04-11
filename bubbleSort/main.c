#include <stdio.h>

void stampaArray(int array[], int dim);
void bubbleSort(int array[], int dim);
void scambia(int array[], int i, int j);

int main(int argc, char **argv)
{
	int dim = 6;
    int array[dim];
    int i;
    
    printf("Caro utente,\ninserisci la sequenza di interi in modo non ordinato.\n");
    
    for(i = 0; i < dim; i++){
        printf("Valore %d:\t", i+1);
        scanf("%d", &array[i]);
    }
    
    bubbleSort(array, dim);
    stampaArray(array, dim);
	return 0;
}

void stampaArray(int array[], int dim){
    int i;
    
    printf("Array con %d elementi.\n", dim);
    for(i = 0; i < dim; i++){
        printf("%d ", array[i]);
    }
    

    
    printf("\n");
}

void scambia(int array[], int i, int j){
    int app; //Variabile d'appoggio
    
    app = array[i];
    array[i] = array[j];
    array[j] = app;
}

void bubbleSort(int x[], int n) {
  int flag=1, k=n-1, i;

  while (flag == 1 && k > 0) {
    flag = 0;
    for (i=0; i<k; i++) {
      if (x[i]>x[i+1]) {
        scambia(x, i, i+1);
        flag = 1;
      }
    }
    k = k-1;
  }
  return;
}