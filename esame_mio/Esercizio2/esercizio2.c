#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void  zip(int* a,int* b, int* res, int n)  // dichiarazione  funzione 
{ 
	int indicezip =0;
	for (int i = 0; i < n; ++i) // funzione che  crea  l'array con i numeri concatenati 
	{
	 res[indicezip]= a[i];
	 indicezip +=1;
	 res[indicezip]= b[i];
	 indicezip +=1;	 

	}

}

int main()
{
		
	int arrayDispari[100];        // inserisco i numeri  nei 2 array 
	int arrayPari[100];
	for (int i = 0; i < 100; ++i)
	{
		arrayPari[i] = i*2;  //    in uno ci metto i pari 
		arrayDispari[i] = i*2 + 1; //  nell' altro i dispari 
		 
	}		

	int arrayZip[200];
	zip(arrayPari, arrayDispari, arrayZip, 100);
	for (int i = 0; i < 200; ++i)
	{
		printf(" Stampa di zip%d\n",arrayZip[i]); //stampa del risultato 
	}
		 
	
	return EXIT_SUCCESS;
}