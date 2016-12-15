
#include "stdafx.h"

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct crypto_soft
{
	char Devname[128];
	char Algorythm[64];
	char Version[64];
	char Licence[64];

};





int main() {
	crypto_soft *pSoft;

	FILE *pF;
	int n(0);


	pF = fopen("C:\\Users\\DELL\\Documents\\Visual Studio 2015\\Projects\\bmstu_lab7_1\\MyProgramm2.txt", "r");
	if (pF == 0)
	{
		printf("Error, file not found");
		return 1;
	}
	
	pSoft = new crypto_soft[n];
	fread(&n, sizeof(int), 1, pF);
	
	fread(pSoft, sizeof(crypto_soft), n, pF);
	fclose(pF);


	for (unsigned int i = 0; i < n; ++i) 
	{
		cout << pSoft[i].Devname << " " << pSoft[i].Algorythm << " " << pSoft[i].Version << " " << pSoft[i].Licence << " "  << endl;
	}
	


	return 0;
}
	

