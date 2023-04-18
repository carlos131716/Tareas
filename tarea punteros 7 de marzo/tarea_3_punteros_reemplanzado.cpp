//copiamos el ejercicio de par o impar y 
//cambiamos el valor de numero a 53
#include<iostream>
using namespace std;
int main (){
    int numero=53;
    int *direcccion_memoria;//declaramos un puntero
    
    direcccion_memoria=&numero;//guarda la posicion de memoria

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