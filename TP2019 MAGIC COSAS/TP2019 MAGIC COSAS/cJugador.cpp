#include "cJugador.h"

ush cJugador::max_id = 0;
ush cJugador::cant_actual = 0;

cJugador::cJugador(ush _id, ush _cantActual, string _nombre, ush _cantP) : id(++max_id) {
	this->nombre = _nombre;
	this->cant_actual++;
	this->cantP = 0;

	this->listaP = new cPersonaje * [cantP];

}

cJugador::~cJugador() { this->cant_actual--;}

float cJugador::calcular_daño_total(){
	float aux;
	for (int i = 0; i < cantP; i++)
	{
		aux += this->listaP[i]->get_daño();
	}
	return aux;
}

void cJugador::agregar(cPersonaje* personaje){
	cPersonaje** aux = new cPersonaje * [cantP+1];
	for (int i = 0; i < cantP; i++)
	{
		aux[i] = listaP[i];
	}
	aux[cantP++] = personaje;
	delete[] listaP; 
	listaP = aux;
}

cPersonaje* cJugador::quitar(int id){
	cPersonaje * aux;
	aux = listaP[buscar(id)];
	listaP[buscar(id)] = NULL;
	delete listaP[buscar(id)];
	ordenar();
	return aux;
}

int cJugador::buscar(int id){
	for (int i = 0; i < cantP; i++)
	{
		if (listaP[i]->get_id() == id)
		{
			return i;
		}
	}
}

void cJugador::eliminar(cPersonaje* personaje){
	listaP[buscar(personaje->get_id())] = NULL;
	delete listaP[buscar(personaje->get_id())];

}

void cJugador::ordenar() {
	for (int i = 0; i < cantP; i++)
	{
		if (!listaP[i])
		{
			listaP[i] = listaP[i + 1];
		}
	}
	listaP[cantP-1] = NULL;
}

cPersonaje* cJugador::operator[](ush i)
{
	return listaP[i];
}

void cJugador::operator+(cPersonaje* personaje)
{
	agregar(personaje);
}

void cJugador::operator-(cPersonaje* personaje)
{
	eliminar(personaje);
}