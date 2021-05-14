#include "Pieza.hpp"

Pieza::Pieza() {
}

Pieza::~Pieza() {
}

char Pieza::tipo_pieza(bool deci_pieza){
	char tipo; 
	if(deci_pieza==true){
		tipo = 'X'; 
	} else {
		tipo = 'O'; 
	}	
}

 	 bool Pieza::get_deci_pieza(){
 	 	return this->deci_pieza; 
	  }; 
