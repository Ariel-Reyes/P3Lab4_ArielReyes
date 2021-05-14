#ifndef DAMAS_HPP
#define DAMAS_HPP
#include "Casilla.hpp"
class Damas
{
	private:
     Casilla*** tablero; 
	
	public:
		Damas();
		~Damas();
		Casilla*** crear_tablero(); 
		
};

#endif