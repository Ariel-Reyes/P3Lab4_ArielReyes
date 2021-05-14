#include "Casilla.hpp"

Casilla::Casilla()
{
}

Casilla::~Casilla()
{
}

char** Casilla::llenar_casillas_devolver(){
	char** matriz = new char*[8];
	for(int i=0;i<8;i++){
		matriz[i] = new char[8];
	}
	
		for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			matriz[i][j] = ' ';
		}
	}
	return matriz; 
	
}