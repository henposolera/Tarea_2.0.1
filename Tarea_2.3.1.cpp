//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void registraNombre(int);
string jug1, jug2, jug3, jug4;
int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	registraNombre(2);
	return 0;
}

void registraNombre(int nJugadores){

	 switch (nJugadores) {
	 	case 1:
	 		cout << "Ingrese el primer nombre del jugador #1: " << flush;
	 		cin >> jug1;
	 		break;
	 	case 2:
	 		cout << "Ingrese el primer nombre del jugador #1: " << flush;
	 		cin >> jug1;
	 		cout << "Ingrese el primer nombre del jugador #2: " << flush;
	 		cin >> jug2;
	 		break;
	 	case 3:
	 		cout << "Ingrese el primer nombre del jugador #1: " << flush;
	 		cin >> jug1;
	 		cout << "Ingrese el primer nombre del jugador #2: " << flush;
	 		cin >> jug2;
	 		cout << "Ingrese el primer nombre del jugador #3: " << flush;
	 		cin >> jug3;
	 		break;
	 	case 4:
	 		cout << "Ingrese el primer nombre del jugador #1: " << flush;
	 		cin >> jug1;
	 		cout << "Ingrese el primer nombre del jugador #2: " << flush;
	 		cin >> jug2;
	 		cout << "Ingrese el primer nombre del jugador #3: " << flush;
	 		cin >> jug3;
	 		cout << "Ingrese el primer nombre del jugador #4: " << flush;
	 		cin >> jug4;
	 		break;
	 	      }
	 	cout << "Jug1: " << jug1 << endl;
	 	cout << "Jug2: " << jug2 << endl;
	 	cout << "Jug3: " << jug3 << endl;
	 	cout << "Jug4: " << jug4 << endl;
}
