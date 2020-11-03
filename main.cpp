
#include <iostream>
#include "dinamico.h" 

using namespace std;

int main()
{
	Dinamico<int> dinamico;
	
	
for (size_t i = 0; i < 10; i++) {
         dinamico.insertar_final(i);
         
       	cout << dinamico[i] << " ";
       
    }
    	cout << endl;
    dinamico.eliminar_inicio();
    dinamico.eliminar_final();	
    dinamico.insertar(200, 2);
    dinamico.eliminar(1);
    cout << endl;

    for (size_t i = 0; i < dinamico.size(); i++) {
    		
     
    
        cout << dinamico[i] << " ";
    }
    cout << endl;
	
}

