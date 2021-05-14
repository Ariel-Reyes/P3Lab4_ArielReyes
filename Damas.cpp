#include "Damas.hpp"

Damas::Damas() {
}

Damas::~Damas() {
}

Casilla*** Damas::crear_tablero() {

	Casilla** tablero = new Casilla*[8];
	for(int i=0; i<8; i++) {
		tablero[i] = new Casilla[8];
	}

	for(int i=0;i<8;i++) {

		for(int j=0;j<8;j++) {

           tablero[i][j] = Casilla(); 

		}

	}


};

