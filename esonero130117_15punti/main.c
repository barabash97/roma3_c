#include <stdio.h>

int triplaSomma(int interi[], int lunghezza);
int controllaIndiceTripla(int interi[], int lunghezza, int indice);
int main(int argc, char **argv)
{
	int lunghezza;
    int i;
    
    printf("Lunghezza:\n");
    scanf("%d", &lunghezza);
    
    int interi[lunghezza];
    
    for(i = 0; i < lunghezza; i++){
        printf("Valore %d\t", i+1);
        scanf("%d", &interi[i]);
    }
    
    if(triplaSomma(interi, lunghezza)){
        printf("Ok.\n");
    } else {
        printf("False.\n");
    }
    
	return 0;
}

int triplaSomma(int interi[], int lunghezza){
    
    int flag = 1;
    int i;
    
    if(lunghezza < 3) flag = 0;
    
    for(i = 0; i < lunghezza && flag; i++){
        flag = controllaIndiceTripla(interi, lunghezza, i);
    }
    
    return flag;
}

int controllaIndiceTripla(int interi[], int lunghezza, int indice){
    int flag = 1;
    
    if(indice == 0){
        if(interi[indice] != interi[indice+1] + interi[indice+2]) flag = 0;
    } else if(indice < lunghezza-1){
        if(interi[indice] != interi[indice-1] + interi[indice+1]) flag = 0;
    } else {
        if(interi[indice] != interi[indice-1] + interi[indice-2]) flag = 0;
    }
    
    return flag;
}