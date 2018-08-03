#include<iostream>
#include "Factura.h"

using namespace std;


Factura::Factura(){}
Factura::Factura(string numero_pieza, string descripcion, int cantidad_articulo, int precio)
{
	this->numero_pieza = numero_pieza;
	this->descripcion = descripcion;
	this->cantidad_articulo = cantidad_articulo;
	this->precio = precio;
}
//Setters
void Factura::setNumeroPieza(string numero_pieza)
{
	this->numero_pieza = numero_pieza;
}
void Factura::setDescripcion(string descripcion)
{
	this->descripcion = descripcion;
}
void Factura::setCantidadArticulo(int cantidad_articulo)
{
	this->cantidad_articulo = cantidad_articulo;
}
void Factura::setPrecio(int precio)
{
	this->precio = precio;
}
//Getters
string Factura::getDescripcion()
{
	return this->descripcion;
}
string Factura::getNumeroPieza()
{
	return this->numero_pieza;
}
int Factura::getCantidadArticulo()
{
	return this->cantidad_articulo;
}
int Factura::getPrecio()
{
	return this->precio;
}
int Factura::MontoFactura()
{
	int monto = 0;
	if (getPrecio()<0)
	{
		monto = 0 * this->getCantidadArticulo();
	}
	else {
		monto = this->getPrecio() * this->getCantidadArticulo();
	}
	return monto;
}