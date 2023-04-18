#include<iostream>
using namespace std;
int main(){
    //declaramos los productos
    string productos[5]={"calculadora","teclado","camara","celular","cargador"};
    //cambiamos el nombre del producto 3 por computadora
    productos[2]="computadora";
    //imprimimos el arreglo en un for
    for(int i=0;i<5;i++){
    //aca identificamos la posicion del producto    
        cout<<"Producto["<<i<<"]:"<<productos[i]<<endl;
    }
    return 0;
}