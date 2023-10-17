// comentario para github
#include "CodCliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	// instancia de un objeto
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
//	cout<<"Datos del Cliente"<<obj.getNit()<<", "<<obj.getNombres()<<", "<<obj.getDireccion()<<", "<<obj.getTelefono()<<endl;

	obj.mostrar();
	cout<<"Ingrese Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();

	// instanciar un objeto y utilizar get and set
/*	Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();
*/
}
