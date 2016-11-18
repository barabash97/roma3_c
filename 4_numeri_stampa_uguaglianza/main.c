/* 
 * Scrivi un programma che chiede all'utente di inserire quattro numeri interi, li legge e stampa uno dei seguenti messaggi:

- "Ci sono esattamente 4 numeri fra loro uguali" (se i numeri sono ad esempio 1,1,1,1)

- "Ci sono esattamente 3 numeri fra loro uguali" (se i numeri sono ad esempio 1,1,1,2)

- "Ci sono esattamente 2 numeri fra loro uguali" (se i numeri sono ad esempio 1,1,2,3)

- "Ci sono due coppie di numeri fra loro uguali" (se i numeri sono ad esempio 1,1,2,2)

- "Ci sono esattamente 0 numeri fra loro uguali" (se i numeri sono ad esempio 1,2,3,4)

Parte NON ESSENZIALE, ma riservata solo ai più curiosi (una soluzione verrà pubblicata online quando almeno uno studente avrà inviato una soluzione ottima a frati@dia.uniroma3.it). Come si risolve l'esercizio potendo utilizzare solamente istruzioni di stampa e lettura, l' operatore di assegnamento, operatori matematici (+, -, *, /), operatori di confronto (==, >, ...), ed UNA SOLA ISTRUZIONE IF-ELSE? Sono quindi vietate istruzioni ripetitive, istruzioni condizionali diverse da if-else, array, stringhe, OPERATORI LOGICI (||, &&, !) ... 
*/


/* GITHUB: https://github.com/barabash97/roma3_c 
 * E-MAIL: vol.barabash@stud.uniroma3.it */
#include <stdio.h>

int main(int argc, char **argv)
{
	
    int a,b,c,d;
    
    int i = 0;

    printf("Caro utente, inserisci i numeri a,b,c,d.\n");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    
    if(((a==b) + (c==d) + (b!=c) + (a != d)) == 4) {
        printf("Ci sono due coppie dei numeri fra loro uguali.\n"); //OK
    } else {
        i += ( (a==b) + (b == a) + (b==c) + (c==d));
        
        printf("Ci sono %d numeri fra loro uguali.\n", i);
    }

	return 0;
}
