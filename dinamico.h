#ifndef DINAMICO_H
#define DINAMICO_H
#include <iostream>
using namespace std;

template <class T>
class Dinamico
{
	
	T*dinamico;
	size_t tam;
	size_t cont;
	const static size_t MAX=5;
	public:
		Dinamico();
	   ~Dinamico();
	   void insertar_inicio(const T& f);
	   void insertar_final(const T& f);
	   void insertar(const T& f, size_t p);
	   
	   void eliminar_final();
	   void eliminar_inicio();
	   void eliminar (size_t p);
	   
	   size_t size();
	   int operator[](size_t o)
	   {
	   	return dinamico[o];
	   }
	private:
		void expandir();
};

template <class T>
Dinamico<T>::Dinamico()
{
	dinamico = new T[MAX];
	cont = 0;
	tam = MAX;
	
}
template <class T>
Dinamico<T>::~Dinamico()
{
	delete[] dinamico;
	
}
template <class T>
void Dinamico<T>::insertar_final(const T& f)
{
	if(cont==tam){
		expandir();
	}
	
	dinamico[cont]=f;
	cont++;
}

template <class T>
void Dinamico<T>::insertar_inicio(const T& f)
{
	if(cont==tam){
		expandir();
	}
	for(size_t i=cont; i>0; i--){
		dinamico[i]=dinamico[i-1];
	
	}
	dinamico[0]=f;
	cont++;
} 

template <class T>
size_t Dinamico<T>::size()
{
	return cont;
}

template <class T>
void Dinamico<T>::insertar(const T& v, size_t p)
{
    if (p >= cont) {
        cout << "Posición no válida" << endl;
        return;
    }
    if (cont == tam) {
        expandir();
    }
    for (size_t i = cont; i > p; i-- ) {
        dinamico[i] = dinamico[i-1];
    }
    dinamico[p] = v;
    cont++;
}

template <class T>
void Dinamico<T>::eliminar_final()
{
    if (cont == 0) {
        cout << "Arreglo vacío" << endl;
        return;
    }
    cont--;
}
template <class T>
void Dinamico<T>::eliminar_inicio()
{
    if (cont == 0) {
        cout << "Arreglo vacío" << endl;
        return;
    }
    for (size_t i = 0; i < cont-1; i++) {
        dinamico[i] = dinamico[i+1];
    }
    cont--;
}
template <class T>
void Dinamico<T>::eliminar(size_t p)
{
    if (cont == 0) {
        cout << "Arreglo vacío" << endl;
        return;
    }
    for (size_t i = p; i < cont - 1; i++) {
        dinamico[i] = dinamico[i+1];
    }
    cont--;
}

template <class T>
void Dinamico<T>::expandir(){
	T *nuevo=new T[tam+MAX];
	
	for(size_t i=0; i<cont; i++){
		nuevo[i]=dinamico[i];
	}
	
	delete[] dinamico;
	
	dinamico=nuevo;
	tam= tam+MAX;
	
}






#endif
