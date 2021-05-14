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
	    void llenar_tablero(Casilla***); 	
	    void imprimir_tablero(Casilla***); 
	    bool movimiento_valido(int x, int y); 
	    
};

#endif