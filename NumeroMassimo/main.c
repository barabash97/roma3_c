#include <stdio.h>
#include <string.h>

/* Funzione che riceve come parametro una stringa. La funzione 
 * restituisce il massimo numero contenuto nella stringa o -1 se 
 * la stringa non contiene nessun carattere numerico. */
int numeroMassimo(char *stringa) {
	int i;								// per scandire la stringa
	int numeroAttuale;			// il numero attuale
	int numeroMassimo;		// il numero massimo 
	
	/* inizializzazioni */
	numeroAttuale = -1;
	numeroMassimo = -1;
	i = 0;			// prima posizione da guardare
	/* vai avanti fino alla fine della stringa */
	while(stringa[i] != '\0') {
		/* il carattere attuale è numerico? */
		if(stringa[i]>='0' && stringa[i]<='9') {
			
			/* primo carattere numerico? */
			if(numeroAttuale==-1)
				numeroAttuale = stringa[i]-'0';
			else	// se non è il primo devi aggiornare quello precedente
				numeroAttuale = numeroAttuale * 10 + (stringa[i]-'0');
			
			/* controlla se hai un nuovo massimo */
			if(numeroAttuale>numeroMassimo)
				numeroMassimo = numeroAttuale; 
            printf("Numero Attuale: %d. Numero massimo:%d\n", numeroAttuale, numeroMassimo);
		}
		else // non stiamo guardando un carattere numerico
			numeroAttuale = -1;
		i++;		// passa al prossimo carattere

	}
	return numeroMassimo;
}

/* funzione principale */
int main(){
	/* input */
	printf("Ciao, sono un programma che legge una stringa "); 
	printf("e determina il massimo numero contenuto nella stringa.\n"); 
	char stringa[50];
	printf("Introduci una bella stringa: ");
	fgets(stringa, 50, stdin);
	
	/* rimuovi \n */
	stringa[strlen(stringa)-1]='\0';
	
	/* invoca la funzione numeroMassimo */
	int numero = numeroMassimo(stringa);
	
	/* output */
	if(numero==-1)
		printf("La stringa non contiene caratteri numerici");
	else
		printf("Il massimo numero nella stringa %c %d", 138, numero);
}