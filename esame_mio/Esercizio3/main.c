#include <stdio.h>
#include <stdlib.h>              // importo le librerie 
#include "moltiplicazione.h"      //  file per fare la moltiplicazione con la somma 
int main()
{	int a=3;
	int b=5;
	int risultato=0;
	risultato= moltiplicazione(a,b);         // prima  operazione 
	printf("Il risultato è %d\n",risultato); 

	risultato= moltiplicazione(15,0);
	printf("Il risultato è %d\n",risultato); // seconda operazione 

return 0;
}