#include "cPersonaje.h"

ush cPersonaje::max_id = 0;

cPersonaje::cPersonaje(ush _id, string _nombre, float _daño, float _vida, enum::tipo _tipo) : id(++max_id) 
{ 
	

}

cPersonaje::~cPersonaje()
{
	this->cant_actual--;
}



