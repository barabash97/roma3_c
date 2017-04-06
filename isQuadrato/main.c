#include <stdio.h>

int isQuadrato(int radice);

int main(int argc, char **argv)
{
	int intero = 0;
    while(intero <= 0){
        printf("Inserisci un numero intero.\n");
        scanf("%d", &intero);
    }
    
    if(isQuadrato(intero)){
        printf("E\' un quadrato perfetto.\n");
    } else {
        printf("Non e\' un quadrato perfetto.\n");
    }
    
	return 0;
}

int isQuadrato(int radice){
    int flag = 0;
    
    for(int i = 1; i <= radice && !flag; i++){
        if(i*i == radice){
            flag = 1;
        }
    }
    
    return flag;
}