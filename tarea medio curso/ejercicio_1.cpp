//ejercicio de 
#include<iostream>
using namespace std;
//hacemos una funcion para ver que numero es par o impar
void par_impar(int vect[5],int tamanio){
    int par, impar;
    for(int i=0;i<tamanio;i++){
        if(vect[i]%2==0){
            cout<<"el numero es "<<vect[i]<<" es par"<<endl;
        }else{
             cout<<"el numero es "<<vect[i]<<" es impar"<<endl;
        }
    }
}
//hacemos una funcion para ver la suma de apres e impares
void suma_par_impar(int vect[5],int tamanio){
    int suma_par=0;
    int suma_impar=0;
    for(int i=0;i<5;i++){
        if(vect[i]%2==0){
            suma_par=suma_par+vect[i];
        }else{
            suma_impar=suma_impar+vect[i];
        }
    }
    //imprimimos los resultados para pegarlo en el int main
    cout<<"la suma de pares es "<<suma_par<<" la suma de los impares "<<suma_impar<<endl;
}
int main(){
    //declaramos variables y su tamanio
    int vect[5];
    int tamanio = sizeof(vect) / sizeof(vect[0]);
    //ingresamos los valores
    for(int i=0;i<tamanio;i++){   
    cout<<"ingrese los valores"<<endl;
    cin>>vect[i];
}

//imprimimos los numeros pares
par_impar(vect,5);
cout<<endl;

//la suma de los numeros pares e impares
suma_par_impar(vect,5);
cout<<endl;

return 0;
}