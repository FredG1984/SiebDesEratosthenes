#include <stdio.h>
#include "Eratosthenes.h"

#define GRENZWERT 2

void InitialisiereFeld(int PIO_arrPrim[], int PI_intObergrenze)
{
	int intIndex;

	for(intIndex = 0; intIndex < PI_intObergrenze -1 ; intIndex++ )
	{
		PIO_arrPrim[intIndex] = intIndex + GRENZWERT;

	}
	
}

void Primzahlsieb(int PIO_arrPrim[], int PI_intObergrenze)
{
	int intIndex = 0;
	int intSiebzahl = 0;
	int intIndexLetzteSiebZahl = 0;
	int intVielfach;
	
	do
	{
		intSiebzahl = PIO_arrPrim[intIndex];
		if (0 < intSiebzahl)
		{
			intVielfach = 2 * intSiebzahl;
			while(intVielfach <= PI_intObergrenze)
			{
				intIndex += intSiebzahl;
				PIO_arrPrim[intIndex] = 0;
				intVielfach += intSiebzahl;
			}
////			
		}


		intIndexLetzteSiebZahl++;
		intIndex = intIndexLetzteSiebZahl;
	} while(intSiebzahl < PI_intObergrenze);
}




void AusgabeDerPrimzahlen(int PIO_arrPrim[], int PI_intObergrenze)
{
	int intIndex = 0; 
	int intZaehler = 1;

	for(intIndex=0; intIndex < PI_intObergrenze;intIndex++)
	{
		if (PIO_arrPrim[intIndex] > 0)
		{
			printf("%d - %d \n" ,intZaehler++, PIO_arrPrim[intIndex]);
		}
	}
}
