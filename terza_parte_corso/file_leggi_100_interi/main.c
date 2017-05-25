#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
    
    /* Scrittura */
    FILE *fp = fopen("leggi100interi", "wb");
    int i;
    
    for(i = 0; i < 100; i++){
        fwrite(&i, sizeof(int), 1, fp);
    }
    
    fclose(fp);
    
    /* Lettura */
    int interi[100];
    
    FILE *fp2 = fopen("leggi100interi", "rb");
    fread(interi, sizeof(int), 100, fp2);    
    fclose(fp2);
    
    for(i = 0; i < 100; i++){
        printf("%d\n", interi[i]);
    }
	return 0;
}
