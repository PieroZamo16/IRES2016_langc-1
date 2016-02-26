#include <stdio.h>
#include <stdlib.h>
 
 

double media(int array[], int size){
	double meadianumeri=0;
	//int idx=0;
	double somma=0;                // funzione che fa la media
		for (int i = 0; i < size; ++i)
		{	
			somma = somma +array[i];
		}
		double medianumeri=somma/size;
    return  medianumeri;

}

int main() {
	int num =100;
	int mioarray[num];
	int i = 0;
		for (; i < num; ++i)
		{
			mioarray[i] = (i + 1) * 3;
		}
 
	double risultato = media(mioarray, num);     // eseguo funzione che fa la media 

	printf(" Il valore voluto è %f\n:",risultato); //   stampa del risultato a video 	
	return 0;
	 
}

 