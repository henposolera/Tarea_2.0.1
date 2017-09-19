//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int nJugadores;
int numJugadores (int);
void registraNombre(int);
string jug1, jug2, jug3, jug4;

int main() {
	cout << "Ingrese el numero de jugadores: " << flush;
	cin >> nJugadores;
	int jugadores =  numJugadores (nJugadores);
	cout << "Jugadores en esta ronda: " << jugadores << endl;
	registraNombre(jugadores);

	return 0;
}





 int numJugadores (int ) {
	 while (nJugadores < 2 || nJugadores  > 4 ) {
	 		cout << "Error: solo se permiten 2, 3, o 4 jugadores" << endl;
	 		cout << "Ingrese el numero de jugadores: " << flush;
	 		cin >> nJugadores;
	 	}
	return nJugadores;
 };

 void registraNombre(int){

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
	 	cout << "Orden de Jugadores: " << endl;
 	 	cout << "Jugador #1: " << jug1 << endl;
	 	cout << "Jugador #2: " << jug2 << endl;
	 	cout << "Jugador #3: " << jug3 << endl;
	 	cout << "Jugador #4: " << jug4 << endl;
 }
