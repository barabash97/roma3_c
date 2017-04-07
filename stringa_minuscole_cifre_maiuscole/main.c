#include <stdio.h>

int main(int argc, char **argv)
{
	char stringa[] = "0123456789abcdefghilmnopqrstuvzABCDEFGHILMNOPQRSTUVZ";
    char stringaConcatenata[100]; //Stringa finale
    char cifre[50];
    char minuscole[50];
    char maiuscole[50];
    int c_i, mi_i, ma_i, i = 0; //Indice per le stringhe

    for(i = 0; stringa[i] != '\0'; i++){
        if(stringa[i] >= 48 && stringa[i] <= 57){
            cifre[c_i] = stringa[i];
            c_i++;
        } else if(stringa[i] >= 97 && stringa[i] <= 122){ 
            minuscole[mi_i] = stringa[i];
            mi_i++;
        } else {
            maiuscole[ma_i] = stringa[i];
            ma_i++;
        }
    }
    ma_i++;
    maiuscole[ma_i] = "\0";
    printf("%s%s%s", minuscole, cifre, maiuscole);
	return 0;
}
