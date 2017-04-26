#include <stdio.h>
#include <stdlib.h>

/* funzione che calcola la potenza fra due numeri in maniera ricorsiva */
float potenza(float base, int esponente) {
	// pre: esponente>=0
	float pot; 	// il valore da restituire
	
	/* CASO BASE */
	if(esponente==0)
		pot = 1;
	/* PASSO RICORSIVO */
	else
		pot = base * potenza(base, esponente-1);
	
	return pot;
}

/* funzione che calcola il valore di un polinomio; i parametri della funzione sono
 * un array coefficienti i cui elementi sono di tipo float, un intero n che rappresenta
 * il grado del polinomio ed un intero x che rappresenta il valore della variabile */
float polinomio(float *coefficienti, int n, int x){
    // pre: n>=0
	float valore; 		/* valore da restituire */
    /* CASO BASE */
	if (n==0) 
		valore = coefficienti[0];
    /* PASSO RICORSIVO */
	else 
        valore = coefficienti[n]*potenza(x,n)+ polinomio(coefficienti, n-1, x);
    return valore;
}

/* funzione che calcola il valore di un polinomio; i parametri della funzione sono
 * un array coefficienti i cui elementi sono di tipo float, un intero n che rappresenta
 * il grado del polinomio ed un intero x che rappresenta il valore della variabile;
 * SOLUZIONE ALTERNATIVA che non utilizza la funzione potenza */
float polinomio2(float *coefficienti, int n, int x){
    // pre: n>=0
	float valore; 		/* valore da restituire */
    /* CASO BASE */
	if (n==0) 
		valore = coefficienti[0];
    /* PASSO RICORSIVO */
	else 
        valore = coefficienti[0]+ x*(polinomio(coefficienti+1, n-1, x));
    return valore;
}
 
/* funzione che stampa un polinomio */	
void stampaPolinomio(float *coefficienti, int grado) {
	printf("Ecco il polinomio:");

	/* stampa i termini in ordine decrescente di grado */
	for(int i=grado; i>=2; i--)
	/* solo i termini il cui coefficiente � diverso da zero */
		if(coefficienti[i]!=0)
			if(coefficienti[i]>0)	
				printf(" +%.2fx^%d", coefficienti[i],i);
			else
				printf(" %.2fx^%d", coefficienti[i],i);
		
	/* per il termine di grado 1 non vuoi stampare ^1 */
	if(coefficienti[1]!=0)
		if(coefficienti[1]>1)	
			printf(" +%.2fx", coefficienti[1]);
		else
			printf(" %.2fx", coefficienti[1]);

	/* per il termine noto non vuoi stampare x */
	if(coefficienti[0]!=0)
		if(coefficienti[0]>0)	
			printf(" +%.2f", coefficienti[0]);
		else
			printf(" %.2f", coefficienti[0]);

	printf("\n");
}

/* funzione di test per la funzione polinomio */
void testPolinomio() {
	/* polinomio grado 0 */
	float p1[]= {4}; 
    printf("p(x)= 4.00, p(3)=4.00, valore calcolato: %.2f\n\n", polinomio(p1,0,3)); 

	/* variabile valore 0 */
	float p2[]= {-1.2,3.5,-2}; 
    printf("p(x)= -1.2 + 3.5x - 2x^2, p(0) = -1.20, valore calcolato: %.2f\n\n", polinomio(p2,2,0)); 

	/* solo il primo coefficiente diverso da 0 */
	float p3[]= {2.03,0,0,0}; 
    printf("p(x)= 2.03, p(3) = 2.03, valore calcolato: %.2f\n\n", polinomio(p3,3,3)); 

	/* solo l'ultimo coefficiente diverso da 0 */
	float p4[]= {0,0,0,2}; 
    printf("p(x)= 2x^3, p(3) = 54.00, valore calcolato: %.2f\n\n", polinomio(p4,3,3)); 
	
	/* polinomio "normale */
	float p5[]= {1,2,4,1}; 
    printf("p(x)= 1 + 2x + 4x^2 + x^3, p(2) = 29.00, valore calcolato: %.2f\n", polinomio(p5,3,2)); 
}

/* funzione principale */
int main(){
 //   testPolinomio();
	
    int n=0;				// grado del polinomio
	int risposta=1;	// per interazione con utente
	float variabile;	// l'incognita del polinomio
	
	/* area di memoria per i coefficienti del polinomio */
	float *coefficienti = (float *) malloc(sizeof(float));		
	/* termine di grado 0 */
	printf("Introduci il termine noto: ");
	scanf("%f", coefficienti);
	/* leggi coefficienti ripetutamente */
	while(risposta){
		printf("\nIl polinomio ha altri mononi? Introduci 1-->SI oppure 0-->NO\n");
		scanf("%d", &risposta);
		if(risposta) {	// ci sono altri termini
			n++;			// aumenta il grado
			printf("Introduci il coefficiente del termine di grado %d: ", n);
			/* aumenta la dimensione dell'area di memoria */
			coefficienti = (float *) realloc(coefficienti, (n+1)* sizeof(float));
			scanf("%f", coefficienti+n);
		}
	}
	stampaPolinomio(coefficienti,n);
	printf("\nChe valore della variabile ti interessa? ");
	scanf("%f", &variabile);
	printf("Il polinomio vale %.2f\n", polinomio(coefficienti,n,variabile));
	free(coefficienti);		
}
