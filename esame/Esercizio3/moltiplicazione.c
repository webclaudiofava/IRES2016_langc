#include <stdio.h>
#include <stdlib.h>
#include "moltiplicazione.h"
#include "somma.h"

int moltiplicazione(int addend, int times) {
	int result = 0;
	for (int i = 0; i < times; ++i) {
		result = somma(result, addend);
	}
	return result;
	return EXIT_SUCCESS; // 0
}