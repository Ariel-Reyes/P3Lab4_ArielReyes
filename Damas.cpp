#include "Damas.hpp"
#include "Pieza.hpp"
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

void Damas::llenar_tablero(Casilla*** tablero){
	
	
	
	
	
}

bool Damas::movimiento_valido(int x , int y){
	
}

void movimiento_valido(int x, int y){
	
}
