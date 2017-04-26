#include <stdio.h>
#include <math.h>

/* Realizzazione di una struct come un'array di dati(oggetti) */
/* Realizzazione della struttura */
struct Libro {
    char *titolo;
    int anno;
    char *nome_autore;
    char *cognome_autore;
    float prezzo;
};

void creaLibro(struct Libro *libro, int indice){
    libro[indice].anno = 2019;
    libro[indice].titolo = "Libro non uscito 2";
    libro[indice].nome_autore = "Nome futuro";
    libro[indice].cognome_autore = "Cognome sconosciuto";
    libro[indice].prezzo = 100.43;
}

void stampa(struct Libro *libro, int indice){
    printf("%s\n", libro[indice].titolo);
    printf("Anno: %d\n", libro[indice].anno);
    printf("Autore: %s %s\n", libro[indice].nome_autore, libro[indice].cognome_autore);
    printf("Prezzo: %.2f euro\n",libro[indice].prezzo);
}


int main(int argc, char **argv)
{
	struct Libro libro[2];
    
    creaLibro(&libro, 0);
    creaLibro(&libro, 1);
    
    stampa(&libro, 1);
	return 0;
}
