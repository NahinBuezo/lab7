#pragma once

#include "persona.h"
#include <string>
using std::string;

class Admin : public Persona{
	string clave;
	string puesto;
public:
	//Admin(string, string);
	Admin(string, string, string, int, string, string, string, string);
	Admin(const Admin&);
	virtual string toString()const;
	string getClave()const;
	string getPuesto()const;
	void setClave(string);
	void setPuesto(string);

	/* data */
};