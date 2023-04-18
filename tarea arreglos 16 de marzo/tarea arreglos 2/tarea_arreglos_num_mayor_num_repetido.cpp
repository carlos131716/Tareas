#include<iostream>
using namespace std;
int main(){
    //declaramos las variables del tamanio del arreglo
    int vect[5];
    int tamanio=sizeof(vect)/sizeof(vect[0]);
    //creamos un for para pedir datos al usuario
    for(int i=0;i<tamanio;i++){
        cout<<"ingrese los numeros"<<endl;
        cin>>vect[i];
    }
    //declaramos variables y los igualamos a cero
    int menor = vect[0],mayor=vect[0];
    //usamos un for para que cuente los numeros
    for (int i = 1; i < tamanio; i++){
        //usamos los if para poder sacar el numero mayor y menor
        if (vect[i] < menor){
            menor = vect[i]; 

        }if(mayor<vect[i]){
            mayor=vect[i]; 
        }
        }
    //decalramos variable para sacar los numeros que se repiten
    int num_repetido;
    int cont=0;    
    //creamos otro for para los numeros que se repiten
    for(int i = 0; i < 10; i++){
        for (int j = i+1; j < 10; j++){
            if(vect[i] == vect[j]){
                num_repetido = vect[i];
                break;
                
            }
            if(vect[i]==vect[j]){
                cont++;
            }
        }
    }
    //imprimimos los resultados
    cout<<"el numero mayor es: "<<mayor<<endl;
    cout<<"el numero menor es: "<<menor<<endl;
    cout<<"el numero repetido es: "<<num_repetido<<" se repite "<<cont<<endl;

    return 0;
}