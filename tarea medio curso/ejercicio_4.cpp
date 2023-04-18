#include <iostream>
using namespace std;
void Ingresar_numeros(int vect[] , int n){
	for(int i=0; i<n; i++){
		do{
			cout<<"ingrese el numero "<<i+1<<" : ";
			cin>>vect[i];
		}while(vect[i]==0);
		
	}
}

void Imprimir_numeros(int vect[],int n){
	cout<<" Elementos del numero"<<endl;
	for(int i=0; i<n; i++){
		cout<<vect[i]<<"/";
	}
}
void Encontrar_Mayor(int vect[] , int n){
	int Mayor;
	Mayor = vect[0];
	for(int i=1; i<n; i++){
		if(vect[i]>Mayor){ 
			Mayor = vect[i];
		}
	}
	cout<<"\nEl numero mayor en el vector es : "<<Mayor<<endl;
}
void Encontrar_Menor(int vect[] , int n){
	int Menor;
	Menor = vect[0];
	for(int i=1; i<n; i++){
		if(vect[i]<Menor){ 
			Menor = vect[i];
		}
	}
	cout<<"\nEl numero Menor en el vector es : "<<Menor<<endl;
}
void Promedio(int vect[] , int n){
	int Suma=0, Promedio;
	for(int i=1; i<n; i++){
		Suma = Suma + vect[i];
	}
	Promedio = Suma/n;
	cout<<"\nel promedio del vector es : "<<Promedio<<endl;
}
void Mediana(int vect[] , int n){
	int aux;
	float mediana;
	int z;
	for(int i=0; i<9; i++){
		for(int j=i+1; j<10; j++){
			if(vect[j]<vect[i]){
				aux=vect[i];
				vect[i]=vect[j];
				vect[j]=aux;
			}
		}
	}
	if(n%2==0){
		z = n/2; 
		mediana = (vect[z]+vect[z+1])/2;
	}else{
		z = (n+1)/2;
		mediana = vect[z];
	}
	cout<<"\La mediana entre los numeros del arreglo es : "<<mediana<<endl;
}
void  Valor_Mas_Repetido(int vect[] , int n){
	int Cant_repeticiones[10], Valores_unicos[10],cant_valore_Unicos=0;
	int cont=0;
	for(int i=0; i<n; i++){
		Valores_unicos[i]=0;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<cant_valore_Unicos; j++){
			if(Valores_unicos[j]==vect[i]){
				cont++; 
			}
		}
		if(cont==0){
			Valores_unicos[cant_valore_Unicos]=vect[i];
			cant_valore_Unicos++;
		}
		cont=0;
	}
	
	for(int i=0; i<cant_valore_Unicos; i++){
		for(int j=0; j<n; j++){
			if(Valores_unicos[i]==vect[j]){
				cont++; 
			}
		}
		Cant_repeticiones[i]=cont;
		cont=0;
	} 
	int Mayor=0;
	for(int i=0; i<cant_valore_Unicos; i++){
		if(Mayor < Cant_repeticiones[i]){
			Mayor = Cant_repeticiones[i];
		}
	}
	cout<<"\nvalor o valores que mas e repiten"<<endl;
	for(int i=0; i<cant_valore_Unicos; i++){
		if(Mayor == Cant_repeticiones[i]){
			cout<<" valor : "<<Valores_unicos[i]<<endl;
		}
	}
	cout<<Mayor<<" veces cada uno"<<endl;
}
int main(){
	int vect[10],N=10;
	Ingresar_numeros(vect,N);
	Imprimir_numeros(vect,N);
	Encontrar_Mayor(vect,N);
	Encontrar_Menor(vect,N);
	Mediana(vect,N);
	Valor_Mas_Repetido(vect,N);
	return 0;
}