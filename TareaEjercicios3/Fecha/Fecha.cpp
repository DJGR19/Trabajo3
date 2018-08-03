#include"Fecha.h"

Fecha::Fecha(int dia, int mes, int ano)
{
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
}
void Fecha::setDia(int dia)
{
	this->dia = dia;
}
void Fecha::setMes(int mes)
{
	if (mes = > 1 && mes = < 12)
	{
		this->mes = mes;
	}
	else
	{
		this->mes = 1;
	}
}
void Fecha::setAno(int ano)
{
	this->ano = ano;
}


int Fecha::getDia()
{
	return this->dia;
}
int Fecha::getMes()
{
	return this->mes;
}
int Fecha::getAno()
{
	return this->ano;
}
void Fecha::MostrarFecha()
{
	cout << this->getDia() << "/" << this->getMes() << "/" << this->getAno() << endl;
}