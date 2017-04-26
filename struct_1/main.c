#include <stdio.h>

/* Realizzazione della struttura */
struct Libro {
    char *titolo;
    int anno;
    char *nome_autore;
    char *cognome_autore;
    float prezzo;
};

struct Libro creaLibro(){
    struct Libro libro;
    libro.anno = 2013;
    libro.titolo = "Prova";
    libro.nome_autore = "Nome";
    libro.cognome_autore = "Cognome";
    libro.prezzo = 19.99;
    
    return libro;
}
int main(int argc, char **argv)
{
	struct Libro libro1 = creaLibro(); //Inizializzazione della struttura
    
    /* Impostazione dei valori*/
    /*
    libro1.anno = 2016;
    libro1.titolo = "Mind of the number";
    libro1.nome_autore = "Barbara";
    libro1.cognome_autore = "Oakley";
    libro1.prezzo = 14.99;
    */
    
    /* Stampa */
    printf("%s\n", libro1.titolo);
    printf("Anno: %d\n", libro1.anno);
    printf("Autore: %s %s\n", libro1.nome_autore, libro1.cognome_autore);
    printf("Prezzo: %.2f euro\n",libro1.prezzo);
	return 0;
}


