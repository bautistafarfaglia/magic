#pragma once
#include "global.h"
class cObjeto
{
	cObjeto(const string nombre, float da�o, float vida);
	~cObjeto();

	private:
		const string nombre;
		float da�o;
		float vida;
};

