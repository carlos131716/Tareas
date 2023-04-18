// Escribir un programa que lea una lista de palabras y las ordene alfabéticamente
#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
using namespace std;


void IngresarNombres(char datos[][50],int cantidad){
	for(int i=0; i<cantidad; i++){
		fflush(stdin);
		cout<<"nombre "<<i+1<<" : ";
		gets(datos[i]);
	}
}
void Imprimir_Nombres(char datos[][50],int cantidad){
    cout<<"los nombres en orden son : "<<endl;
    char temp[50];
	for(int i=0; i<cantidad; i++){
		for(int j=i; j<cantidad; j++){
			if(strcmp(datos[i],datos[j])>0){
				strcpy(temp,datos[i]);
				strcpy(datos[i],datos[j]);
				strcpy(datos[j],temp);
			}
		}
	}
	for(int i=0; i<cantidad; i++){
		cout<<i+1<<". "<<datos[i]<<endl;
	}
}

int main() {
    int Cant;
    cout<<"Cuantas palabras desea ingresar "<<endl;
    cin>>Cant;
	char Nombres[Cant][50];
	IngresarNombres(Nombres,Cant);
	Imprimir_Nombres(Nombres,Cant);
	
    return 0;
}