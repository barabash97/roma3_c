#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Nodo {
    int numero;
    struct Nodo* next;
};

void stampaLista(struct Nodo* puntaNodo)
{
    printf("Ecco la lista:\n");
    while(puntaNodo != NULL) {
        printf("%d\t", puntaNodo->numero);
        puntaNodo = puntaNodo->next;
    }
}

struct Nodo* leggiLista()
{
    int risposta;
    printf("Ciao utente,\nleggiamo una lista di interi.\n");
    struct Nodo* head = NULL;

    printf("La lista ha almeno un intero? (1=>SI, 0=>NO): ");
    scanf("%d", &risposta);

    if(!risposta) {
        printf("E\' stato breve ma intenso.\n");
    } else {
        struct Nodo* puntaNodo = NULL;
        puntaNodo = malloc(sizeof(struct Nodo));
        head = puntaNodo;

        printf("Inserisci il primo intero!\n");
        scanf("%d", &(puntaNodo->numero));
        printf("La lista ha un altro intero? (1=>SI, 0=>NO): ");
        scanf("%d", &risposta);

        while(risposta) {
            puntaNodo->next = malloc(sizeof(struct Nodo));
            puntaNodo = puntaNodo->next;
            printf("Inserisci intero: ");
            scanf("%d", &(puntaNodo->numero));
            printf("La lista ha un altro intero? (1=>SI, 0=>NO): ");
            scanf("%d", &risposta);
        }

        puntaNodo->next = NULL;
    }

    return head;
}

int main(int argc, char** argv)
{
    struct Nodo* head = leggiLista();
    stampaLista(head);
    return 0;
}
