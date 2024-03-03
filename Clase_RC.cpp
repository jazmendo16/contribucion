#include <iostream>
using namespace std;

 class RC{
	
 	protected : string nombres,apellidos,direccion;
 	
 	
 	 	RC (){
	  }
		RC(string nom,string ape,string dir){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			
			
	  }
	  
	  void crear();
	  void leer();
	  void actualizar();
	  void borrar();
 	
};
