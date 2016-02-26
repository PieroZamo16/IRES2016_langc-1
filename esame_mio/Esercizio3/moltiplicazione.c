#include <stdio.h>   
#include <stdlib.h>
#include "moltiplicazione.h"
#include "somma.h"

int moltiplicazione(int a, int b)  // funzione  per  fare la moltiplicazione 
	{  
	int mult = 0;
	for(int i = 0; i < a; ++i) {
		mult = somma(mult, b);
		}
return mult;
}

