/*
Esercizio 4 (2.5 punti)

Creare una struttura Studente caratterizzata da un cognome e dal voto ottenuto.
Implementare le funzioni setCognome, getCognome, setVoto e getVoto che ne impostano e restituiscano rispettivamente 
il cognome e il voto ottenuto dallo studente.
Nota: non porrere limiti alla lunghezza del cognome.

Creare un array di 100000 Studenti così denominati:

Studente 1:
Cognome: “Cognome_1”
Voto: 1

Studente 2:
Cognome: “Cognome_2”
Voto: 2
…
Studente i:
Cognome: “Cognome_i”
Voto: i%10
..
Studente 100000:
Cognome: “Cognome_100000”
Voto: 0

Il voto è il numero dello studente modulo 10 (studente i-esimo ha voto i%10).

PS. la funzione sprintf(char* buf, “%d”, i) permette di trasformare un intero in una stringa (buf contiene la stringa rappresentante l’intero i.

Calcolare la somma dei voti degli studenti.
*/

#include <stdio.h>  // define printf
#include <stdlib.h> // define EXIT_SUCCESS
#include <string.h>

typedef struct {
	char* cognome;
	int voto;
} Studente;

void Studente_setCognome(Studente* this, char* cognome) {
	int length = strlen(cognome);
	this->cognome = malloc(length + 1);
	strcpy(this->cognome, cognome);
}

void Studente_setVoto(Studente* this, int voto) {
	this->voto = voto;
}

void Studente_getCognome(Studente* this, char* cognome, int length) {
	strncpy(cognome, this->cognome, length);
	cognome[length - 1] = '\0';
}

int Studente_getVoto(Studente* this) {
	return this->voto;
}

int main() {
	int studenti = 100000;
	Studente* s = malloc(studenti * sizeof(Studente));
	for (int i = 0; i < studenti; ++i) {
		char cognome[20];
		strcpy(cognome, "Cognome: ");
		Studente_setCognome(s + i, cognome);
		Studente_setVoto(s + i, (i + 1) % 10);
	}
	int sommatotale = 0;
	for (int i = 0; i < 100000; ++i)
		sommatotale += Studente_getVoto(s + i);
	printf("Somma totale dei voti: %d\n", sommatotale);
	return EXIT_SUCCESS;
}