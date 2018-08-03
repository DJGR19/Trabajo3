#pragma once
#ifndef EMPLEADO_h
#define EMPLEADO_H
#include <iostream>
using namespace std;


class Empleado {

public:
	string nombre;
	string apellido;
	int salario;
	int amount;
	void setnombre(string);
	void setapellido(string);
	void setsalario(int);

	string getnombre();
	string getapellido();
	int getsalario();
	Empleado();

	void ImprimirEmpleado();
	void ImprimirEmpleadoA();

};




#endif // !EMPLEADO_h
