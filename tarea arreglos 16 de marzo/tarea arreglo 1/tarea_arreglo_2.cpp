#include <iostream>
using namespace std;

int main() {
  string libros[5];
  //Hallamos el tamanio del libro con sizeof
  int tamanio=sizeof(libros)/sizeof(libros[0]);
  //Ingresamos los nombres del libro que desee el usuario
  for(int i=0;i<tamanio;i++){
     cout<<"ingrese el producto:"<<endl;
     cin>>libros[i];
  }
  //imprimimos los productos que ingreso el usuario
  for(int i=0;i<tamanio;i++){
  	 cout<<"Producto["<<i<<"]:"<<libros[i]<<endl;
 }
  

  return 0;
}