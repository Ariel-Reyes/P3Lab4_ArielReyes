#ifndef PIEZA_HPP
#define PIEZA_HPP
#include <string>
using namespace std; 
class Pieza
{
	private:
bool deci_pieza;

	public:
		Pieza();
		~Pieza();
		
		char tipo_pieza(bool deci_pieza);
	    bool get_deci_pieza(); 
	    	
		
	   
			
			
		
		
	
};

#endif