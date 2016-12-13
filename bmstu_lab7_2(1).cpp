#include "stdafx.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>


struct crypto_soft
{
	char Devname[128];
	char Version[64];
	char Algorythm[128];
	char License[64];
};

using namespace std;


int main(int argc, char* argv[])
{
	unsigned int n; 
	char q;

	crypto_soft *pSoft; 
	cout << "Amount of elements= ";
	scanf("%d", &n); 
	crypto_soft cs[n];
	for (unsigned int i = 0; i<n; ++i)
	{
		cout << "Enter Developer :" << endl;
		cin >> cs[i].Devname;
		cout << "Enter Algorythm :" << endl;
		cin >> cs[i].Algorythm;
		cout << "Enter Version :" << endl;
		cin >> cs[i].Version;
		cout << "Enter Licence :" << endl;
		cin >> cs[i].License;
	}


	ofstream outfile;
	outfile.open("Programm.txt");
	for (unsigned int i = 0; i < n; ++i)
	{
		outfile << cs[i].Devname << " " << cs[i].Algorythm << " " << cs[i].License << " " << cs[i].Version << endl;
	}


	outfile.close();
	_getch();
	return 0;
}
