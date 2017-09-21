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
int turno1[] = {0,0,0,0};
int turno2[] = {0,0,0,0};
int sumaTurno1[]	= {0,0,0,0};
int sumaTurno2[]	= {0,0,0,0};
int jug1, jug2, jug3, jug4 = 0;
int t2 = 0;
int total[] = {0,0,0,0,0};
int numJugadores (int);
void registraNombre(int);
void procesaRondas(int);
string nombreJug1, nombreJug2, nombreJug3, nombreJug4;

int main() {

	int jugadores =  numJugadores (nJugadores);
	cout << "Jugadores en esta ronda: " << jugadores << endl;
	registraNombre(jugadores);
	procesaRondas(nJugadores);
	return 0;
}



//NOMBRES

 int numJugadores (int ) {
	 cout << "Ingrese el numero de jugadores: " << flush;
	 cin >> nJugadores;
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
	 		cin >> nombreJug1;
	 		break;
	 	case 2:
	 		cout << "Ingrese el primer nombre del jugador #1: " << flush;
	 		cin >> nombreJug1;
	 		cout << "Ingrese el primer nombre del jugador #2: " << flush;
	 		cin >> nombreJug2;
	 		break;
	 	case 3:
	 		cout << "Ingrese el primer nombre del jugador #1: " << flush;
	 		cin >> nombreJug1;
	 		cout << "Ingrese el primer nombre del jugador #2: " << flush;
	 		cin >> nombreJug2;
	 		cout << "Ingrese el primer nombre del jugador #3: " << flush;
	 		cin >> nombreJug3;
	 		break;
	 	case 4:
	 		cout << "Ingrese el primer nombre del jugador #1: " << flush;
	 		cin >> nombreJug1;
	 		cout << "Ingrese el primer nombre del jugador #2: " << flush;
	 		cin >> nombreJug2;
	 		cout << "Ingrese el primer nombre del jugador #3: " << flush;
	 		cin >> nombreJug3;
	 		cout << "Ingrese el primer nombre del jugador #4: " << flush;
	 		cin >> nombreJug4;
	 		break;
	 	      }
	 	cout << endl;
	 	cout << "Orden de Jugadores: " << endl;
 	 	cout << "Jugador #1: " << nombreJug1 << endl;
	 	cout << "Jugador #2: " << nombreJug2 << endl;
	 	cout << "Jugador #3: " << nombreJug3 << endl;
	 	cout << "Jugador #4: " << nombreJug4 << endl;
	 	cout << endl;
 }


 // PROCESO DE RONDAS


 void procesaRondas(int) {
 for (size_t i = 1; i <= 5; i++) {
 	      cout << "Ronda " << i << ": " << endl;
 	      for (size_t a = 1; a <= nJugadores; a++) {
 	    	  	  cout << "Jugador #" << a << endl;
 	    	  	  int ronda = 1;
 	          while (ronda < 2) {
 	        	  	  cout << "Turno " << ronda << ": " << endl;
 	        	  	  for (size_t a = 1; a <= 3; a++) {
 	        	  		  cout << "Flecha # " << a << ": " << flush;
 	        	  		  cin >> turno1[a];
 	        	  		  while (turno1[a] < 1 || turno1[a] > 10){
 	        	  			  cout << "Valor incorrecto" << endl;
 	        	  			  cout << "Flecha # " << a << ": " << flush;
 	        	  			  cin >> turno1[a];
 	        	  		  }

 	        	  	  }
 	        	  	 cout << "Turno 2:" << endl;
 	        	  	 for (size_t b = 1; b <= 3; b++) {
 	        	  		 cout << "Flecha # " << b << ": " << flush;
 	        	  		 cin >> turno2[b];
 	        	  		 while (turno2[b] < 1 || turno2[b] > 10){
 	        	  			  cout << "Valor incorrecto" << endl;
 	        	  			  cout << "Flecha # " << b << ": " << flush;
 	        	  			  cin >> turno2[b];

 	        	  		  	}

 	        	  		  sumaTurno2[b] = turno2[1] + turno2[2] +turno2[3];
 	        	  		  t2 = sumaTurno2[b];


 	        	  	  }


			   ronda = ronda +1;
			   sumaTurno1[a] = turno1[1] + turno1[2] +turno1[3];
			   total[a] = sumaTurno1[a] + t2;

 				  cout << "Total en Ronda de Jugador #" << a << ": " << total[a] << endl;
 				  cout << endl;
  	            }


 	        }
		  jug1 = jug1 + total[1];
		  jug2 = jug2 + total[2];
		  jug3 = jug3 + total[3];
		  jug4 = jug4 + total[4];
		  cout << "Gran Total Jugador 1: " << jug1 << endl;
		  cout << "Gran Total Jugador 2: " << jug2 << endl;
		  cout << "Gran Total Jugador 3: " << jug3 << endl;
		  cout << "Gran Total Jugador 4: " << jug4 << endl;
		  cout << endl;
 	    }

}
