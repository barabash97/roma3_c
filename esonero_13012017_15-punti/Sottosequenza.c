#include <stdio.h>

int sottosequenza(int array_s[], int lunghezza_s, int array_t[], int lunghezza_t);

int main(){
    
    int lunghezza_s, lunghezza_t;
    int i;
    
    printf("Inserisci la lunghezza di s.\n");
    scanf("%d", &lunghezza_s);
    int array_s[lunghezza_s];
    
    printf("\nInserisci la sequenza di s.\n");
    
    for(i = 0; i < lunghezza_s; i++){
        printf("Valore %d = \t", i+1);
        scanf("%d", &array_s[i]);
    }
    
    printf("Inserisci la lunghezza di t.\n");
    scanf("%d", &lunghezza_t);
    int array_t[lunghezza_t];
    
    printf("\nInserisci la sequenza di s.\n");
    
    for(i = 0; i < lunghezza_t; i++){
        printf("Valore %d = \t", i+1);
        scanf("%d", &array_t[i]);
    }
    
    int indice = sottosequenza(array_s, lunghezza_s, array_t, lunghezza_t);
    if(indice == -1){
        printf("Non %c stato trovato indice.\n", 138);
    } else {
        printf("E\' stato trovato indice con il valore pari a = %d.\n", indice);
    }
    
}

int sottosequenza(int array_s[], int lunghezza_s, int array_t[], int lunghezza_t){
    int i, j;
    int indice = -1;
    int flag;
    
    for(i = 0; i < lunghezza_t && indice == -1; i++){
        if(array_t[i] == array_s[0]){
            flag = 1;
            for(j = 0; j < lunghezza_s && flag; j++){
                if(array_s[j] != array_t[j+i]) flag = 0;
            }
            if(flag) indice = i;
        }
    }
    
    return indice;
    
}