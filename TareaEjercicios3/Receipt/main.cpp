#include <iostream>
#include "Factura.h"
using namespace std;

int main()
{
	Factura f (3,"Martillo",4,23);
	
	f.ObtenerMontoFactura();

	system("pause");
}