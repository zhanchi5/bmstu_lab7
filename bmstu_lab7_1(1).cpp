#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <fstream>

using namespace std;

struct crypto_soft
{

	char Devname[128];
	char Algorythm[64];
	char Version[128];
	char Licence[64];
};

struct List
{
	crypto_soft cs; // info field
	List *pNext;
};





int main()
{
	
	List *pF = 0; 
	List *p;
	char r; 
	ofstream outfile;
		outfile.open("MyProgramm2.txt");
	FILE * pFile;
	do {

		
		p = (List *)malloc(sizeof(List));

		
		cout << "Name of Developer: " << endl;
		fflush(stdin);
		cin >> p->cs.Devname;

		cout << "Algorythm: " << endl;
		fflush(stdin);
		cin >> p->cs.Algorythm;

		cout << "Version: " << endl;
		fflush(stdin);
		cin >> p->cs.Version;

		cout << "Licence: " << endl;
		fflush(stdin);
		cin >> p->cs.Licence;
		
		
						
		outfile << "Developer: " << p->cs.Devname << endl << "Algorythm: " << p->cs.Algorythm <<endl << "Version: " << p->cs.Version << endl << "Licence " << p->cs.Licence << endl << endl;
		
			
	

		cout << "Press y or Y to continue" << endl;
		cin >> r;

		
		

	} while (r == 'Y' || r == 'y');
	outfile.close();
	return 0;
}
