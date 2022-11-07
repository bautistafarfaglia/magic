#pragma once
#include "global.h"
class cObjeto
{
	cObjeto(const string nombre, float daño, float vida);
	~cObjeto();

	private:
		const string nombre;
		float daño;
		float vida;
};

