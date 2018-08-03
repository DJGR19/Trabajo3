#include <iostream>
using namespace std;
#include "Cuenta.h"

Cuenta::Cuenta() : saldocuenta(0), retirar(0)
{
	if (saldocuenta >= 0)
	{
		cout << "Su cuenta existe!" << endl;
	}
	else {

		cout << "El saldo inicial es inválido" << endl;
	}
}

Cuenta::~Cuenta()
{
	cout << "Se han destruido los datos correctamente: " << endl;
}

void Cuenta::setsaldocuenta(int s)
{
	this->saldocuenta = s;
}

int Cuenta::getsaldocuenta()
{
	return this->saldocuenta;

}

void Cuenta::abonar()
{
	cout << "Ingrese la cantidad a abonar: " << endl;
	cin >> saldocuenta;
	saldocuenta++;
	cout << "Se ha abonado exitosamente!" << endl;

}

void Cuenta::cargar()
{
	cout << "Ingrese la cantidad a retirar: " << endl;
	cin >> retirar;
	if (retirar > saldocuenta)
	{
		cout << "El monto a cargar excede el saldo de la cuenta!" << endl;
	
	}
	else {

		saldocuenta=(saldocuenta-retirar);
	
	}
}

void Cuenta::ObtenerSaldo()
{
	cout << "El saldo actual que posee es de: " << getsaldocuenta() << endl;

}
