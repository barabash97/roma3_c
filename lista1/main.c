#include <stdio.h>
#include <stdlib.h>
struct Nodo {
    int numero;
    struct Nodo *next;
};

struct Nodo *leggiNumeri(){
    int risposta;
    printf("Ciao utente,\nleggiamo una lista di interi.\n");
    struct Nodo *head = NULL;
    
    printf("Ci sono interi?");
    scanf("%d", &risposta);
    if(!risposta){
        printf("Non ci sono interi da inserire.\n");
    } else {
        struct Nodo *puntaNodo = NULL;
        puntaNodo = malloc(sizeof(struct Nodo));
        head = puntaNodo;
        printf("Inserisci il primo intero.\t");
        scanf("%d", &(puntaNodo->numero));
        printf("La lista ha un altro intero?\n");
        scanf("%d", &risposta);
        while(risposta){
            puntaNodo->next = malloc(sizeof(struct Nodo));
            puntaNodo = puntaNodo->next;
            printf("%d", &(puntaNodo->numero));
            printf("La lista ha un altro intero?\n");
            scanf("%d", &risposta);
        }
        
        puntaNodo->next = NULL;
    }

    return head;
};

void stampaLista(struct Nodo *puntaNodo){
    printf("Ecco la lista:\n");
    
    while(puntaNodo != NULL){
        printf("%d\t", puntaNodo->numero);
        puntaNodo = puntaNodo->next;
    }
}

int main(int argc, char **argv)
{
	struct Nodo *head = leggiNumeri();
    stampaLista(head);
	return 0;
}
