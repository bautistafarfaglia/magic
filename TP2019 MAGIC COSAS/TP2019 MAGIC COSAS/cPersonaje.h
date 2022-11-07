#pragma once
#include "global.h"
enum tipo{MAGO, ARQUERO, CABALLERO};

class cPersonaje
{

public:

	cPersonaje(ush _id, string _nombre, float _daño, float _vida, tipo _tipo);
	virtual ~cPersonaje() = 0;
	void virtual to_string() = 0;

	float get_daño() { return this->daño;}
	float get_id() { return this->id; }

	void set_daño(float _daño) { this->daño = _daño; }
	void set_vida(float _vida) { this->vida = _vida; }

private:

	tipo tipo;
	const ush id;
	static ush max_id;
	ush static cant_actual;
	string nombre;
	float daño;
	float vida;
};

