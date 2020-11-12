#ifndef ALGORITMO_H
#define ALGORITMO_H
#include <iostream>

using namespace std;

template <typename T>
void intercambiar(T arr[], size_t i, size_t j)
{
 T temp;
   temp= arr[i];
   arr[i]= arr[j];
   arr[j]= temp;
   	
}

template <typename T, size_t n>
void seleccion (T(&arr)[n])
{
	for (size_t i=0; i<n-1; i++){
		size_t min= i;
		for(size_t j= i+1; j<n; j++){
			if(arr[j] < arr[min]){
				min=j;
			}
		}
		intercambiar(arr,i,min);
	}
}

template <typename T, size_t n>
void burbuja (T(&arr)[n])
{
	for(size_t i=n-1; i>0; i++){
		for(size_t j=0; j<i; j++){
		 if(arr[j]> arr[j+1]){
		 	intercambiar(arr,j,j+1);
		 }
		}
		
	}
}
#endif
