#include <iostream>
#include "Factura.h"
using namespace std;

/*Factura::Factura() : numeropieza(0), descripcion(""), cantidadacomprar(0), precio(0)
{
	this->total = 0;
	cout << "Se ha creado correctamente!" << endl;


}*/

Factura::Factura()
{
	
	cout << "Se ha creado correctamente!" << endl;


}

Factura::Factura(int np, string d, int cc, int p)
{
	this->numeropieza = np;
	this->descripcion = d;
	this->cantidadacomprar = cc;
	this->precio = p;

}

Factura::~Factura()
{
	cout << "Se ha destruido correctamente!" << endl;
}

void Factura::setnumeropieza(int np)
{
	this->numeropieza = np;
}



void Factura::setdescripcion(string d)
{
	this->descripcion = d;
}


void Factura::setprecio(int p)
{
	this->precio = p;

}




void Factura::setcantidadacomprar(int cc)
{
	this->cantidadacomprar = cc;

}

int Factura::getnumeropieza()
{
	return this->numeropieza;
}
string Factura::getdescripcion()
{
	return this->descripcion;
}

int Factura::getcantidadacomprar()
{
	return this->cantidadacomprar;
}

int Factura::getprecio()
{
	return this->precio;
}

void Factura::ObtenerMontoFactura()
{
	
	total= (cantidadacomprar*precio);
	cout << "El total para el producto" << getdescripcion << "es" << total;

}
