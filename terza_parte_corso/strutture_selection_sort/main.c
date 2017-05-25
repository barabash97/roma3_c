#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Impletare algoritmo di ordinamento SELECTION SORT con le strutture */

struct Nodo {
    int numero;
    struct Nodo* next;
};

void selectionSort(struct Nodo* head);

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
    selectionSort(head);
    stampaLista(head);
    return 0;
}

void selectionSort(struct Nodo* head)
{
    struct Nodo* primo;  // primo nodo parte non ordinata
    struct Nodo* minimo; // minimo corrente
    struct Nodo* nodo;   // nodo corrente
    int aux;             // Variabile ausiliaria

    primo = head;

    while(primo != NULL) {
        minimo = primo;

        for(nodo = primo->next; nodo != NULL; nodo = nodo->next) {
            if(nodo->numero < minimo->numero) {
                aux = primo->numero;
                primo->numero = minimo->numero;
                minimo->numero = aux;
            }
            
        }
        
        primo = primo->next;

        
    }
}