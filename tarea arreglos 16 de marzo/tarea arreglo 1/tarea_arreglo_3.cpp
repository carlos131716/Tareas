#include <iostream>
using namespace std;
int main(){
	string productos[5];
	int precios[5];
	//hallamos el tamanio de los producto
	int tamanio=sizeof(productos)/sizeof(productos[0]);
	//Ingremos los productos y precios mediante el ciclo for
	for( int i=0;i<tamanio;i++){
		cout<<"ingrese el producto["<<i<<"]:"<<endl;
		cin>>productos[i];
		cout<<"ingrese el precio del producto["<<i<<"]:"<<endl;
		cin>>precios[i];
	}
	cout<<endl;
    //declaramos la variable maximo para saber cual es
    //el valor maximo y tambiem para hallar el indice
    //del valor maximo
    int maximo;
    maximo=precios[0];
    tamanio=0;
	cout<<"lOS PRODUCTOS SON:"<<endl;
	//imprimos los productos con sus precios
	for (int i=0;i<tamanio;i++){

		cout<<productos[i]<<":"<<precios[i]<<endl;

	}
    for(int i=0;i<5;i++){
        if(precios[i]>maximo){
            maximo=precios[i];
            tamanio=i;
        }
    }
    //aca imprimimos los resultados
	cout<<"El valor maximo del arreglo es:"<<maximo<<endl;
	cout<<"El valor maximo del indice del arreglo es: "<<tamanio<<endl;
	
	
	
	return 0;
}