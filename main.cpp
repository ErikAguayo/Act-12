#include <iostream>

#include "computadora.cpp"
#include "algoritmo.h" 

using namespace std;

int main()
{
  Computadora arr[] = {
  	
  Computadora("Windows", "PC_UNO", 8, 1500),
  
  Computadora("Windows", "Erik", 16, 250),
 
  Computadora("Ubuntu", "Paulo", 32, 300),
  
  };
  
  burbuja(arr);
  
  
  

  
 
 
  
  //Dinamico<Computadora*> ptrs = computadoras.buscar_todos(pc01);
  

  
  
 	
	
//	Dinamico<int> dinamico;
	
	
//for (size_t i = 0; i < 10; i++) {
   //      dinamico.insertar_final(i);
         
  //     	cout << dinamico[i] << " ";
       
  //  }
   // 	cout << endl;
   // dinamico.eliminar_inicio();
   // dinamico.eliminar_final();	
  //  dinamico.insertar(200, 2);
   // dinamico.eliminar(1);
   // cout << endl;

   // for (size_t i = 0; i < dinamico.size(); i++) {
    		
     
    
    //    cout << dinamico[i] << " ";
   // }
    //cout << endl;
	return 0;
}

