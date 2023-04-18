//ejercicio un programa que solicite al usuario ingresar un número entero
//positivo y luego imprima la secuencia de números desde 1 hasta el número
//ingresado, pero reemplazando los múltiplos de 3 por la palabra "Fizz" 
//y los múltiplos de 5 por la palabra "Buzz".Si el número es múltiplo 
//tanto de 3 como de 5, imprimir "FizzBuzz".
#include <iostream>
using namespace std;
//usamos una funcion para nombra FizzBuzz al multiplo de 5
//y Buzz al multiplo de 3
void ImprimirSecuencia(int N){
	for(int i=1; i<=N; i ++){
		
		if(i%3==0){
			if(i%5==0){
				cout<<"FizzBuzz"<<endl;
			}else{
				cout<<"Fizz"<<endl;
			}
		}else 
        if(i%5==0){
			if(i%3==0){
				cout<<"FizzBuzz"<<endl;
			}else{
				cout<<"Buzz"<<endl;
			}
		}else{
            //esto usamos para poder imprimir los numeros
			cout<<i<<endl;
		}
	}
}


int main(){
    //declarom variables
	int num;
	// hacemos un do while para que el usuario ponga numeros positivos
	do{
		cout<<"ingrese el un numero entero positivo "<<endl;
		cin>>num;	
	}while(num<0);
    //imprimimos la funcion
	ImprimirSecuencia(num);
	return 0;
}