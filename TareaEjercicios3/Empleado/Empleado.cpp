
#include <iostream>
#include "Empleado.h"
#include <string>
using namespace std;



Empleado::Empleado()
{
	
}

Empleado::Empleado(): nombre(""), apellido(""), salario(0)
{
	if (salario < 0) {
		salario = 0;
	}
}


void Empleado::setnombre(string nombre)
{
	this->nombre = nombre;
}

void Empleado::setapellido(string apellido)
{
	this->apellido = apellido;
}
void Empleado::setsalario(int)
{
	this->salario = salario;
}

string Empleado::getnombre()
{
	return this->nombre;
}
string Empleado::getapellido()
{
	return this->apellido;
}
int Empleado::getsalario()
{
	return this->salario;
}

void Empleado::ImprimirEmpleado()
{
	string nombre = "Nombre" + this->getnombre();
	string apellido = "Apellido" + this->getapellido();
	int salario = this->getsalario();
	cout << "Nombre del empleado: "<<nombre << endl;
	cout <<"Apellido del empleado: "<< apellido << endl;
	cout <<"Salario : "<<salario << endl;



}

void Empleado::ImprimirEmpleadoA()
{
	
	cout << "Nombre del empleado: " << nombre << endl;
	cout << "Apellido del empleado: " << apellido << endl;
	amount = (salario*0.10) + salario;
	cout << "Salario : " << amount << endl;
	

}