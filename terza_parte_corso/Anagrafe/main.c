/* Librerie */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* END Librerie */ 

/* Costanti */
#define DIM 1
#define DIM_STRING 50
/* END Costanti */

/* Strutture */ 

struct Data {
    int giorno;
    int mese; 
    int anno;
};

struct Anagrafica {
    char *nome;
    char *cognome;
    char *nazione;
};

struct Persona {
    struct Data data;
    struct Anagrafica anagrafica;
};
/* END Strutture */

/* Dichiarazioni funzioni */
void creaPersona(struct Persona *persona, int indice);
void stampaPersona(struct Persona *persona, int indice);
/* END Dichiarazione funzioni */

/* Init del programma */
int main(int argc, char **argv)
{
	struct Persona persona[DIM];
    int i;
    
    for(i = 0; i < DIM; i++){
        creaPersona(persona, i);
    }
    for(i = 0; i < DIM; i++){
        stampaPersona(persona, i);
    }
	return 0;
}

/* Crea una nuova persona */
void creaPersona(struct Persona *persona, int indice){
    struct Anagrafica anagrafica;
    struct Data data;
    printf("Nome: ");
    fgets(anagrafica->nome, DIM_STRING, stdin);
    printf("Cognome: ");
    fgets(anagrafica->cognome, DIM_STRING, stdin);
    printf("Nazione: ");
    fgets(anagrafica->nazione, DIM_STRING, stdin);
    printf("Giorno di nascita: ");
    scanf("%d", &(data.giorno));
    printf("Mese di nascita: ");
    scanf("%d", &(data.mese));
    printf("Anno di nascita: ");
    scanf("%d", &(data.anno));
    *(persona+indice).anagrafica = anagrafica;
    *(persona+indice).data = data;
    
}

/* Stampa i dati anagrafici di una persona */

void stampaPersona(struct Persona *persona, int indice){
    struct Persona p = *(persona+indice);
    struct Anagrafica anagrafica = p.anagrafica;
    struct Data data = p.data;
    printf("Nome: %s", anagrafica.nome);
    printf("Cognome: %s", anagrafica.cognome);
    printf("Nazione: %s", anagrafica.nazione);
    printf("Data di nascita: %d/%d/%d", data.giorno, data.giorno, data.anno);
}