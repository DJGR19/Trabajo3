
#ifndef FACTURA_H
#define FACTURA_H

#include <iostream>
using namespace std;

class Factura {
public:
	string numero_pieza;
	string descripcion;
	int cantidad_articulo;
	int precio;
	Factura();
	Factura(string numero_pieza, string descripcion, int cantidad_articulo, int precio);
	



		void setNumeroPieza(string numero_pieza);
	void setDescripcion(string descripcion);
	void setCantidadArticulo(int cantidad_articulo);
	void setPrecio(int precio);

	string getNumeroPieza();
	string getDescripcion();
	int getCantidadArticulo();
	int getPrecio();
	int MontoFactura();
};
#endif // !FACTURA_H