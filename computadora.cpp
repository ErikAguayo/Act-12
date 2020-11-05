#include "Computadora.h"
#include <iostream>



Computadora::Computadora()
{

}

Computadora::Computadora(const string &sistema, const string &nombre, int ram, int discoduro)
{
	this->sistema = sistema;
    this->nombre = nombre;
    this->ram = ram;
    this->discoduro = discoduro;
}

void Computadora::setSistema(const string &o)
{
    sistema = o;
}

string Computadora::getSistema()
{
    return sistema;
}

void Computadora::setNombre(const string &o)
{
    nombre = o;
}

string Computadora::getNombre()
{
    return nombre;
}

void Computadora::setRam(float o)
{
    ram = o;
}

int Computadora::getRam()
{
    return ram;
}

void Computadora::setDiscoduro(int o)
{
    discoduro = o;
}

int Computadora::getDiscoduro()
{
    return discoduro;
}
