#pragma once
#include "global.h"
#include "cPersonaje.h"
#include "cObjeto.h"
class cJugador
{
	cJugador(ush _id, ush _cantActual, string _nombre, ush _cantP);
	~cJugador();

	virtual void consumir(cPersonaje* personaje, cObjeto* objeto) = 0;
	float calcular_daño_total();
	void agregar(cPersonaje* personaje);
	cPersonaje* quitar(int id);
	int buscar(int id);
	void eliminar(cPersonaje* personaje);

	void ordenar();

	cPersonaje* operator[](ush i);
	void operator+(cPersonaje* lista);
	void operator-(cPersonaje* lista);

private:
	string nombre;
	const ush id;
	static ush max_id;
	ush static cant_actual;
	ush cantP;
	cPersonaje** listaP;
};

