/*

Esercizio 2 (2.5 punti)

Implementare una funzione, denominata zip, che dato due array di interi a e b della stessa lunghezza crei un terzo array 
che contenga i valori dei precedenti array intervallati tra di loro (partendo dal primo elemento dell’array a).

Esempio (in pseudocodice):

a = [1,7,9,4]
b = [4,5,6,9]
Risultato array:
risultato: [1,4,7,5,9,6,4,9]

Testare la funzione creando un array contenente i primi 100 numeri interi pari [0,2,4,6,8,...] e un array contenente i primi 100 numeri
interi dispari [1,3,5,7,9,11,13,...]. Stampare a console l’array risultate dalla chiamata alla funzione zip.

*/

#include <stdio.h>
#include <stdlib.h>

// Funzione che zippa due array di interi
void zip(int even[], int odd[], int len) {
	int c[2 * len];

	for (int i = 0; i < 2*len; ++i) {
		if (i % 2 == 0) {
			c[i] = even[i / 2];
		} else {
			c[i] = odd[(i - 1) / 2];
		}
	}
	for(int i = 0; i < 2 * len; ++i) {
		printf("%d\t", c[i]);
	}
	printf("\n");
}

int main() {
	int a[100];									// Array di pari
	int b[100];									// Array di dispari

	int length = sizeof(a)/sizeof(int);

	// Inizializzo array pari
	for (int i = 0; i < length; ++i) {
		a[i] = i * 2;
	}

	// Inizializzo array dispari
	for (int i = 0; i < length; ++i) {
		b[i] = i * 2 + 1;
	}

	zip(a, b, length);
	return EXIT_SUCCESS; // 0
}