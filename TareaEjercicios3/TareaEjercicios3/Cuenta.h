#pragma once
#ifndef CUENTA_H
#define CUENTA_H

class Cuenta
{
private:
	int saldocuenta;
	int retirar;

public:
	Cuenta();
	~Cuenta();
	int getsaldocuenta();
	void setsaldocuenta(int);
	void abonar();
	void cargar();
	void ObtenerSaldo();
};





#endif // !CUENTA_H
