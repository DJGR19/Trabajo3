#pragma once

#include<iostream>
using namespace std;
class Fecha {
public:
	int dia;
	int mes;
	int ano;
	Fecha(int dia, int mes, int ano);

	void setDia(int dia);
	void setMes(int mes);
	void setAno(int ano);

	int getDia();
	int getMes();
	int getAno();
	void MostrarFecha();
};
