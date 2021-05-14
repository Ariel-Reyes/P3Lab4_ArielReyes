#ifndef CASILLA_HPP
#define CASILLA_HPP
#include <string>
#include "Pieza.hpp">
class Casilla {
	private:
		Pieza pieza_asignada; 
	public:
		Casilla();
		~Casilla();
		char** llenar_casillas_devolver();
		
		

};

#endif