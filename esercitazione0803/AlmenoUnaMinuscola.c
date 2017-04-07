#include <stdio.h>
#include <string.h>

/* SPECIFICA DELLA FUNZIONE TUTTECIFRE 
 * INPUT: st1 array di caratteri
 * PRE: stringa non nulla
 * OUTPUT: int esisteMinuscola 
 * POST: esisteMinuscola è pari ad 1 se c'è almeno una lettera minuscola nella stringa, 
 * è pari a 0 altrimenti */

/* funzione che verifica se la stringa parametro contiene almeno un carattere
 * alfabetico minuscolo a partire dall'indice parametro*/
int aux(char *st1, int indice){
   int  esisteMinuscola; 		// il valore da restituire
   
   if (indice==strlen(st1)) 
		/* non ci sono caratteri da verificare */
     esisteMinuscola=0;
   else 
		/* verifica il primo carattere e ricorri sul resto della stringa */
         esisteMinuscola= (st1[indice]>='a' && st1[indice]<='z') || aux(st1, indice+1);

   return esisteMinuscola;
}

/* funzione che verifica se la stringa parametro contiene almeno un carattere
 * alfabetico minuscolo */
int almenoUnaMinuscola(char *st1){
    return aux(st1,0);            
}

/* funzione di test */   
void testAlmenoUnaMinuscola(){
    printf("*** TEST ALMENO UNA MINUSCOLA *** \n");
	/* stringa vuota */	
	printf("almenoUnaMinuscola(\"\") [0] = %d\n",almenoUnaMinuscola(""));
	/* un solo carattere ed è minuscolo */	
    printf("almenoUnaMinuscola(\"a\") [1] = %d\n",almenoUnaMinuscola("a"));
	/* un solo carattere e non è minuscolo */	
    printf("almenoUnaMinuscola(\"A\") [0] = %d\n",almenoUnaMinuscola("A"));
	/* un solo carattere minuscolo ed è il primo */	
    printf("almenoUnaMinuscola(\"bAAAA\") [1] = %d\n",almenoUnaMinuscola("bAAAA"));
	/* un solo carattere minuscolo ed è l'ultimo */	
    printf("almenoUnaMinuscola(\"AAAAb\") [1] = %d\n",almenoUnaMinuscola("AAAAb"));    
	/* nessun carattere minuscolo */	
    printf("almenoUnaMinuscola(\"AAAAAAA\") [0] = %d\n",almenoUnaMinuscola("AAAAAAA")); 
	/* diversi caratteri minuscoli */
    printf("almenoUnaMinuscola(\"aAAaAaA\") [1] = %d\n",almenoUnaMinuscola("aAAaAaA")); 
}
    
/* funzione principale */   
int main(){
	testAlmenoUnaMinuscola();
}
