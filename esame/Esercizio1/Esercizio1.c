/*

Esercizio 1 (2.5 punti)

Creare una funzione che accetti in input un array di interi e restituisca la media in double degli elementi contenuti.
Stampare a console la media di un array che contenga i primi 100 numeri interi divisibili per 3. (ovveri: 3, 6, 9, …).

*/

#include <stdio.h>
#include <stdlib.h>

// Funzione che calcola media di un array di interi
void avg(int array[], int len) {
	double average = 0;
	for (int i = 0; i < len; ++i) {
		average += array[i];
	}
	average /= len;
	printf("Average is: %f\n", average);
}

int main() {
	int myarray[100];
	int length = sizeof(myarray)/sizeof(int);

	// Initialize myarray to [3, 6, 9, ..., 300]
	for (int i = 0; i < length; ++i) {
		myarray[i] = (i + 1) * 3;
	}

	avg(myarray, length);
	return EXIT_SUCCESS; // 0
}