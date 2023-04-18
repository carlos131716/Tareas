//aca hacemos el ejercicio de numero primos y
//vamos a imprimir la direccion de memoria
#include<iostream>
using namespace std;
int main(){
    int numero;
    int cont=0;//declaramos esta variable para almacenar los divisores
    int *direcccion_memoria;//declaramos un puntero

    direcccion_memoria=&numero;//guarda la posicion de memoria

    //ingresamos un numero
    cout<<"ingrese un numero :"<<endl;
    cin>>numero;
    //usamos un for para poder sacar si el numero de divisores
    //lo divisores lo guardamos en el cont
    for(int i=1;i<numero;i++){
       if(numero%i==0){
        cont++;
       }
    }
    //usamos el cont para ver si el numero es primo
    if(cont<2){
        cout<<"el numero "<<numero<<" es primo"<<endl;
        cout<<"la posicion de memoria es :"<<direcccion_memoria;
    }else{
       cout<<"el numero "<<numero<<" no es primo"<<endl;
       cout<<"la posicion de memoria es :"<<direcccion_memoria; 
    }        
    return 0;
}