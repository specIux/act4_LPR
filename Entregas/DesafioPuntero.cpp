#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;



int main (){

// define edad y le da valor
int edad;
cout<<endl<<"Ingresar edad: ";
cin>>edad;
// iguala el valor con un puntero desreferenciado
int* ptredad = &edad;
// Compara puntero desreferenciado
if (* ptredad>=18){
cout<<endl<<"Ingreso habilitado"<<endl;
cout<<endl<<"Su edad es: "<<* ptredad<<endl; // Muestra la edad guardada en el puntero
cout<<"La posicion de memoria guardada es: "<<ptredad<<endl; // Muestra la posicion de memoria
}
else{cout<<"Edad no habilitada";};

return 0;
};