// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// definirane funkcije
void prikaz(char polje[]); // prikaz
void igrac_A(char polje[]); // unos player A
void igrac_B(char polje[]); // unos player B




int main()
{
	// popis praznih polja
	char polje[9] = { '-', '-', '-', '-', '-', '-', '-', '-', '-' };



	prikaz(polje); // prvi prikaz praznih polja




	igrac_A(polje);
	igrac_B(polje);
	igrac_A(polje);
	igrac_B(polje);
	igrac_A(polje);
	igrac_B(polje);
	igrac_A(polje);
	igrac_B(polje);
	igrac_A(polje);


/*
	cin >> a;
	if (a >= 1 && a <= 9 && polje[a - 1] == '-') {
		polje[a - 1] = 'X';
	}

	system("cls");
	prikaz(polje);
	*/

	system("pause");
	return 0;
}





// funkcija za prikaz polja
void prikaz(char polje[]) {
	for (int i = 0; i < 9; i++) {
		if ((i + 1) % 3 == 0) {
			cout << polje[i] << "\n\n\n";
		}
		else {
			cout << polje[i] << "\t";
		}
	}
}


// unos igraca A
void igrac_A(char polje[]) {
	int a;
	cin >> a;
	if (a >= 1 && a <= 9 && polje[a - 1] == '-') {
		polje[a - 1] = 'X';
	}

	system("cls");
	prikaz(polje);
}

// unos igraca B
void igrac_B(char polje[]) {
	int b;
	cin >> b;
	if (b >= 1 && b <= 9 && polje[b - 1] == '-') {
		polje[b - 1] = 'O';
	}

	system("cls");
	prikaz(polje);
}