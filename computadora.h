#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
#include <iomanip>

using namespace std;



class Computadora 
{
    string sistema;
    string nombre;
    int ram;
    int discoduro;
public:
	
    Computadora();
    
    Computadora(const string &sistema, const string &nombre, int ram, int discoduro);
    
	void setSistema(const string &o);
    string getSistema();
    
	void setNombre(const string &o);
    string getNombre();
   
    void setRam(float o);
    int getRam();
    
    void setDiscoduro(int o);
    int getDiscoduro();
    
    friend ostream& operator<<(ostream &out, const Computadora &c)
    {
    	out << left ;
    	out << setw(10)<< c.sistema;
    	out << setw(10)<< c.nombre;
    	out << setw(10)<< c.ram;
    	out << setw(10)<< c.discoduro << endl;
    	
    	return out;
	}
	friend istream& operator>>(istream &in, Computadora &c)
    {
        
        cout << "Sistema: ";
        getline(cin, c.sistema);
        
        cout << "Nombre: ";
        getline(cin,c.nombre);
        
        cout << "Ram: ";
       cin >> c.ram;
        
        cout << "Disco Duro: ";
       cin >> c.discoduro;
    	
    	return in;
	}
	
	bool operator == (const Computadora& p)
	{
		return sistema == p.sistema;
	}
	bool operator == (const Computadora& p) const
	{
		return sistema == p.sistema;
	}	
	bool operator>(const Computadora &p)
	{
		return sistema > p.sistema;
	}
	bool operator>(const Computadora &p) const
	{
		return sistema > p.sistema;
	}
	bool operator<(const Computadora &p)
	{
		return sistema > p.sistema;
	}
	bool operator<(const Computadora &p)const
	{
		return sistema < p.sistema;
	}
	
};

#endif
