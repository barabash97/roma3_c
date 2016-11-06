/* 
 * File:   main.c
 * Author: darkness
 *
 * Created on November 4, 2016, 3:49 PM
 */


/*
Scrivi un programma che legge due numeri reali e stampa un messaggio: 
"Il maggiore fra i due numeri è il 1°" oppure "Il maggiore fra i due numeri è il 2°",
a seconda che il maggiore fra i due numeri sia il primo o il secondo.
Suggerimenti: Il codice ASCII del carattere 'è' è 138, 
mentre il codice ASCII del carattere '°' è 167. 
 */

/* GITHUB: https://github.com/barabash97/ */

#include <stdio.h>

int main(int argc, char **argv) {
    float a = 0;
    float b = 0;

    printf("Inserisci a:\n");
    scanf("%f", &a);


    printf("Inserisci b:\n");
    scanf("%f", &b);

    printf("Il maggiore tra i due numeri %c il %d%c", 138, (a > b) ? 1 : 2, 167);
    return 0;
}