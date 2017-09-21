//============================================================================
// Name        : 0.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	  // an array with 5 rows and 2 columns.
	   //int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
	   int turno2[3][4];
	   int total = 0;
	   int usuarioJugador = 1;
	   int usuarioJug = 3;
	   int ronda =1;
	   // output each array element's value

	   	   for (size_t i = 1; i < 3; i++)

		   while (usuarioJugador <= usuarioJug) {
		   cout << "Ronda " << i << endl;
		   cout << "Jugador #" << usuarioJugador << ": " << endl;
			  for ( int i = 1; i <=2; i++ )
				  for ( int j = 1; j <= 3; j++ ) {

				  cout << "Turno " << i <<  ": " << flush;
				  cout << "Flecha #" << j << ": " << flush;

			  cin >> turno2[i][j];
			  //cout << "Flecha : "<< turno2[i][j] << endl;

			  }
		   total = turno2[1][1] + turno2[1][2] + turno2[1][3] + turno2[2][1] + turno2[2][2] + turno2[2][3];
		   cout << "total = " << total << endl;
		   usuarioJugador++;
		   	   }



	return 0;
}
