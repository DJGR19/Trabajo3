#include<iostream>
#include "Factura.h"

using namespace std;

int main() {
	Factura  f("S", "asd", 8, 45);
	cout << "El monto de factura es : " << f.MontoFactura() << endl;

	system("pause");
}