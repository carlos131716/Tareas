//ejercicio al usuario un arreglo y luego enumerar de mayor a menor y de menor a mayor
#include<iostream>
using namespace std;
//esta funcion sirve para enumerar de menor a mayor
void mayor_menor(int vect[5],int tamanio){
    //declaramos un auxiliar para enumerar de mayor a menor
    int auxiliar;
    //hacemos un for 
    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = 0; j < tamanio - i - 1; j++)
        {
            if (vect[j] < vect[j + 1])
            {
                int auxiliar = vect[j];
                vect[j] = vect[j + 1];
                vect[j + 1] = auxiliar;
            }
        }
    }
    //aca imprimimos el resultado con un for
    cout << "El arreglo ordenado de mayor a menor es: ";
    for (int i = 0; i < tamanio; i++) {
        cout << vect[i] << "-";
    }
}
//esta funcion sirve para enumerar de menor a mayor
void menor_mayor(int vect[5],int tamanio){
    int auxiliar;
    for(int i=0;i<tamanio;i++){
		for(int j=0;j<tamanio;j++){
			if(vect[j]>vect[j+1]){ 
			  auxiliar=vect[j];
			 vect[j]=vect[j+1];
			  vect[j+1]=auxiliar;
		    }
		}
	}
    //aca imprimimos el resultado con un for
    cout << "El arreglo ordenado de menor a mayor es: ";
	for(int i=0;i<tamanio;i++){
		cout<<vect[i]<<"-";
	}
}
int main(){
    int vect[5];
    int tamanio = sizeof(vect) / sizeof(vect[0]);
    //usamos un for para ingresar los datos
    for(int i=0;i<tamanio;i++){
    cout<<"ingrese los numeros"<<endl;
    cin>>vect[i];
    }
    //imprimimos el resultado
    cout<<"NUMEROS DE MAYOR A MENOR "<<endl;
    mayor_menor(vect,5);
    cout<<endl;
    cout<<"NUMEROS DE MENOR A MAYOR "<<endl;
    menor_mayor(vect,5);
    
return 0;
}