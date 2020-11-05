#include <iostream>

#include "computadora.h"
#include "dinamico.h" 

using namespace std;

int main()
{
  Dinamico<Computadora> computadoras;
  
  Computadora pc01("Windows", "PC_UNO", 8, 1500);
  
  Computadora pc02("Windows", "Erik", 16, 250);
 
  Computadora pc03("Ubuntu", "Paulo", 32, 300);
  
  Computadora pc04("Windows", "Erik", 16, 250);
   
  Computadora pc05("MAC", "Rosa", 2, 1000);
  
  computadoras << pc01 << pc02 << pc03 << pc04 << pc05;
  
  
  Dinamico<Computadora*> ptrs = computadoras.buscar_todos(pc01);
  

  
  cout << pc02;
  if (ptrs.size() > 0) {
       for (size_t i = 0; i < ptrs.size(); i++)
        {
           Computadora *p = ptrs[i];
            cout << *p << endl;
        }
    }
    else {
        cout << "No existen coincidencias" << endl;
    }
 	
	
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

