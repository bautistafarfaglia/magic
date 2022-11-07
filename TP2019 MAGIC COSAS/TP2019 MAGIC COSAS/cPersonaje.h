#pragma once
#include "global.h"
enum tipo{MAGO, ARQUERO, CABALLERO};

class cPersonaje
{

public:

	cPersonaje(ush _id, string _nombre, float _da�o, float _vida, tipo _tipo);
	virtual ~cPersonaje() = 0;
	void virtual to_string() = 0;

	float get_da�o() { return this->da�o;}
	float get_id() { return this->id; }

	void set_da�o(float _da�o) { this->da�o = _da�o; }
	void set_vida(float _vida) { this->vida = _vida; }

private:

	tipo tipo;
	const ush id;
	static ush max_id;
	ush static cant_actual;
	string nombre;
	float da�o;
	float vida;
};

