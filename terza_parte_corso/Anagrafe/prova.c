#include <stdio.h>
#include <string.h>

/* Realizzare un programma che permetta all'utente di svolgere
 * le seguenti operazioni : 
 * 1) Immettere i dati anagrafici di una persona
 * 2) Cancellare i dati anagrafici di una persona precedentemente immessa
 * 3) Ricercare la presenza di una persona e visualizzarne i dati completi
 * 4) Visualizzare tutta l'anagrafica immessa */
 
/* DEFINIZIONE STRUTTURE */
#define MAX_INDICE 	30
#define DIMENSIONE 31
 
 
 /* struttura per rappresentare una data */
struct Data {
	int giorno;
	int mese;
	int anno;
};

/* struttura per rappresentare un indirizzo */
struct Indirizzo {
	char via[50];
	int numero;
	char citta[30];
};

/* struttura per rappresentare una persona */
struct Persona {
	char nome[30];
	char cognome[30];
	struct Data dataDiNascita;
	struct Indirizzo indirizzo;
};

/* FUNZIONI DI SUPPORTO */

/* OUTPUT data di nascita */
void stampaData(struct Data *data){
    printf("DATA DI NASCITA: %d/%d/%d\n", data->giorno, data->mese, data->anno);
}

/* OUTPUT indirizzo */
void stampaIndirizzo(struct Indirizzo *indirizzo){
    printf("INDIRIZZO: %s %d, %s\n", indirizzo->via, indirizzo->numero,indirizzo->citta);
}

/* OUTPUT persona */
void stampaPersona(struct Persona *persona){
    printf("\nNOME: %s\n", persona->nome);
    printf("COGNOME: %s\n", persona->cognome);
    stampaData(&(persona->dataDiNascita));
    stampaIndirizzo(&(persona->indirizzo));
}

/* INPUT data */
void immettiData(struct Data *data) {
	/* leggi giorno, mese e anno */
	printf("Inserisci il giorno: ");
	scanf("%d", &(data->giorno));
	printf("Inserisci il mese: ");
	scanf("%d", &(data->mese));
	printf("Inserisci l'anno: ");
	scanf("%d%*c", &(data->anno));
}

/* INPUT indirizzo */
void immettiIndirizzo(struct Indirizzo *indirizzo) {
	/* leggi giorno, mese e anno */
	printf("Inserisci la via: ");
	fgets(indirizzo->via,50,stdin);
	(indirizzo->via)[strlen(indirizzo->via)-1]='\0';
	printf("Inserisci il numero civico: ");
	scanf("%d%*c", &(indirizzo->numero));
	printf("Inserisci la citt%c: ", 133);				// inserisci valore
	fgets(indirizzo->citta,50,stdin);
	(indirizzo->citta)[strlen(indirizzo->citta)-1]='\0';
}

/* ricerca una persona con un certo nome e cognome e restituisce un puntatore
 * alla persona nell'anagrafe, oppure NULL se la persona non esiste*/
struct Persona *cerca(struct Persona *anagrafe, int dimensione, char *nome, char *cognome) {
	struct Persona *persona = NULL;		// valore da restituire
	int i=0;
	while(i<dimensione && persona==NULL) {
		if(strcmp(nome,(anagrafe+i)->nome)==0 && strcmp(cognome,(anagrafe+i)->cognome)==0)
			persona = anagrafe + i;
		else
			i++;
	}
	return persona;
}

/* funzione che sposta una persona una posizione indietro nell'anagrafe */
void sposta(struct Persona *anagrafe, struct Persona *persona) {
	strcpy((persona-1)->nome, persona->nome);
	strcpy((persona-1)->cognome, persona->cognome);
	persona->dataDiNascita = (persona-1)->dataDiNascita;
	persona->indirizzo = (persona-1)->indirizzo;
}

/* FUNZIONI PRINCIPALI */

/* INPUT persona */
void immettiPersona(struct Persona *persona) {
	
	/* ottieni i dati della persona */
	printf("Introduci il nome della persona: ");
	fgets(persona->nome, DIMENSIONE, stdin);
	(persona->nome)[strlen(persona->nome)-1]='\0';

	printf("Introduci il cognome della persona: ");
	fgets(persona->cognome, DIMENSIONE, stdin);
	(persona->cognome)[strlen(persona->cognome)-1]='\0';

	printf("Introduci la data di nascita della persona...\n");
    immettiData(&(persona->dataDiNascita));

	printf("Introduci l'indirizzo della persona...\n");
    immettiIndirizzo(&(persona->indirizzo));
}

/* funzione per ricercare una persona; la funzione chiede nome e cognome della persona
 * e restituisce un puntatore alla persona oppure NULL se la persona non esiste */
struct Persona *ricercaPersona(struct Persona *anagrafe, int dimensione) {
	/* nome e cognome della persona da ricercare */
	char nome[30];
	char cognome[30];
	
	printf("Introduci il nome della persona: ");
	fgets(nome, 30, stdin);
	(nome)[strlen(nome)-1]='\0';

	printf("Introduci il cognome della persona: ");
	fgets(cognome, 30, stdin);
	(cognome)[strlen(cognome)-1]='\0';

	return cerca(anagrafe,dimensione,nome,cognome);
}

/* funzione per cancellare una persona e restituisce un puntatore alla persona 
 * oppure NULL se la persona non esiste */
struct Persona *cancellaPersona(struct Persona *anagrafe, int dimensione) {
	struct Persona *persona;		// la persona da cancellare
	
	/* prima cerca la persona */
	persona = ricercaPersona(anagrafe,dimensione);
	
	/* se esiste cancellala */
	if(persona!= NULL) {
		int i = 0; 		// contatore
		
		/* anagrafe + dimensione - 1 � l'indirizzo dell'ultimo elemento dell'anagrafe; 
		 * devi spostare indietro tutti gli elementi da quello che ha indirizzo persona+1 */
		
		while(persona+i+1<=anagrafe+dimensione -1) {
			/* sposta la posizione un posto indietro */
			sposta(anagrafe,persona+i+1);
			i++;
		}
			
	}
	
	return persona;
}

/* funzione per visualizzare l'anagrafe */
void visualizzaAnagrafe(struct Persona *anagrafe, int numero) {
	printf("\n**********\n");
	printf("ANAGRAFE\n");
	printf("**********\n");
	/* visualizza tutte le persone dell'anagrafe */
	for(int i=0; i<numero; i++){
		stampaPersona(anagrafe+i);
	}
}

 /* funzione principale di interazione con l'utente */
int main() {
	int numero = -1;
	
	/* elenco di persone */
	struct Persona anagrafe[DIMENSIONE];

	/* numero di persone */
	int numeroPersone = 0;
	
	/* ciclo di interazione con l'utente */
	while(numero!=0) {
		printf("\nCiao utente! Puoi svolgere le seguenti operazioni:\n");
		printf("Introduci 1 -> Immetti una persona\n");
		printf("Introduci 2 -> Cancella una persona\n");
		printf("Introduci 3 -> Ricerca una persona\n");
		printf("Introduci 4 -> Visualizza l'anagrafe\n");
		printf("Introduci 0 -> Termina il programma\n");
		scanf("%d%*c", &numero);
		
		/* immetti una persona */
		if(numero==1)
			/* ci sono ancora posti nell'anagrafe? */
			if(numeroPersone<DIMENSIONE) {
				immettiPersona(anagrafe+numeroPersone);
				numeroPersone++;
			}
			else
				printf("Mi dispiace, abbiamo raggiunto la capienza massima\n");
	
		/* cancella una persona */
		else  if(numero==2)
			/* se la cancellazione � andata a buon fine decrementa il numero di persone */
			if(cancellaPersona(anagrafe, numeroPersone))
				numeroPersone--;
			else
				printf("Mi dispiace, la persona non %c presente nell'anagrafe\n", 138);

		/* ricerca una persona per visualizzarne i dati */
		else  if(numero==3) {
			struct Persona *persona = ricercaPersona(anagrafe, numeroPersone);
			if(persona!=NULL) {
				printf("\nEcco la persona cercata");
				stampaPersona(persona);
			}
			else
				printf("Mi dispiace, la persona non %c presente nell'anagrafe\n", 138);
		}

		/* visualizza tutta l'anagrafe */
		else  if(numero==4)
			visualizzaAnagrafe(anagrafe, numeroPersone);

		/* numero sbagliato? */
		else  if(numero!=0)
			printf("Questo numero non vuol dire niente. Riproviamo!\n");
	}
}
