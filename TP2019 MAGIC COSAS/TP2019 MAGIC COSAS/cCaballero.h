#pragma once
#include "global.h"
#include "cPersonaje.h"
class cCaballero :
    public cPersonaje
{
	cCaballero(const string nombre, float da�o, float vida, float anchoEspada);
	~cCaballero();

private:
	float anchoEspada;
};

