#pragma once
#ifndef FACTURA_H
#define FACTURA_H


class Factura
{
public:
	int numeropieza;
	string descripcion;
	int cantidadacomprar;
	int precio;
	int total;

	void setnumeropieza(int);
	void setdescripcion(string);
	void setcantidadacomprar(int);
	void setprecio(int);

	int getnumeropieza();
	string getdescripcion();
	int getcantidadacomprar();
	int getprecio();

	Factura();
	Factura(int , string, int, int);
	~Factura();
	void ObtenerMontoFactura();



};



#endif // !FACTURA_h
