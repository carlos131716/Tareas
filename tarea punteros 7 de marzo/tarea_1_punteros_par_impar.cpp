//aca vamos hacer un ejercicio de punteros de par o impar y 
//vamos a imprimir la direccion de memoria 
#include<iostream>
using namespace std;
int main (){
    int numero;
    int *direcccion_memoria;//declaramos un puntero
    
    direcccion_memoria=&numero;//guarda la posicion de memoria

    //ingresamos un numero
    cout<<"ingrese un numero :"<<endl;
    cin>>numero;
    //usamos un if para declara una variable par o impar
    //seguido nombramos la posicion de memoria
    if (*direcccion_memoria%2==0){
       cout<<"el numero "<<*direcccion_memoria<<" es par"<<endl;
       cout<<"la posicion de memoria es :"<<direcccion_memoria<<endl;
    }else{
        cout<<"el numero "<<*direcccion_memoria<<" es impar"<<endl;
        cout<<"la posicion de memoria es :"<<direcccion_memoria<<endl;
    }
    
    
return 0;
}