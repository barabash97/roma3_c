#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fp = fopen("miofile", "w");
    
    if(fp == NULL){
        printf("File non esiste.\n");
    } else {
        printf("File esiste.\n");
    }
    
    int numero_caratteri = fprintf(fp, "1234567890");
    
    printf("Il numero di caratteri scritti e\': %d\n", numero_caratteri);
    
    fclose(fp);
	return 0;
}
