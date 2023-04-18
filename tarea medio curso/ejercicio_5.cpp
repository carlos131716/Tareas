//hacemos un ejercicio de una calculadora y que el usuario pida
//que funcion utilizar con el switch
#include<iostream>

using namespace std;
//hacemos un funcion suma
int calculadora_suma(int numero1,int numero2){
int suma=0;
suma=numero1+numero2;
return suma;
}
//hacemos un funcion resta
int calculadora_resta(int numero1,int numero2){
    int resta=0;
    resta=numero1-numero2;
    return resta;
}
//hacemos un funcion division
float calculadora_division(float dividendo,float divisor){
    float division=0;
    if(dividendo==0){
        cout<<"no se puede divir entre cero"<<"\n";
    }else{
        division=divisor/dividendo;
    }
    return division;
}
//hacemos un funcion multiplicacion
int calculadora_multiplicacion(int numero1,int numero2){
    int multiplicacion=0;
    multiplicacion=numero1*numero2;

    return multiplicacion;
}
int main(){ 
    //declaramos variables
    int num1,num2;
    int suma=0;
    int resta=0;
    float division=0;
    int multiplicacion=0;
    int calculadora;
    //pedimos los numeros al usuario
    cout<<"ingrese un numero"<<endl;
    cin>>num1;

    cout<<"ingrese un numero"<<endl;
    cin>>num2;
    //usamos las funciones y los ponemos en su variable respectiva
    suma=calculadora_suma(num1,num2);
    resta=calculadora_resta(num1,num2);
    division=calculadora_division(num1,num2);
    multiplicacion=calculadora_multiplicacion(num1,num2);
    //usamos un do while para que el usuario no pueda pedir otro numero
    do{
        cout<<"1 SUMA"<<endl;
        cout<<"2 RESTA"<<endl;
        cout<<"3 MULTIPLICAION"<<endl;
        cout<<"4 DIVISION"<<endl;
		cout<<"ingrese el numero que desee emplear"<<endl;
		cin>>calculadora;
	}while(calculadora<1 || calculadora >4);
    //usamos un switch para que el usuario decida que operacion utilizar
    switch(calculadora){
        case 1:
        cout<<"la suma es "<<suma<<endl;
        break;
        case 2:
        cout<<"la resta es "<<resta<<endl;
        break;
        case 3:
        cout<<"la multiplicaion es "<<multiplicacion<<endl;
        break;
        case 4:
        cout<<"la division es "<<division<<endl;
        break;	
			}
             return 0;
    }