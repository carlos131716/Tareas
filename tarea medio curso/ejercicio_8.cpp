//ejercicio un programa que solicite el ingreso de 3 notas al usuario, y
//luego que calcule el promedio de las notas
#include<iostream>
using namespace std;
//usamos un float para que no redondee
float promedio(float numero1,float numero2,float numero3){
    float operacion=0;

    operacion=(numero1+numero2+numero3)/3;

    return operacion;
}
int main(){
    //declaramos variables
    float nota1,nota2,nota3;
    float prom_notas=0;
    //usamos un do while para cuando el usuario de la nota 
    //no se pase de 20 o sea menos de 1
    do{
        cout<<"ingrese su nota 1:"<<endl;
        cin>>nota1;
    }while(nota1<1||nota1>20);

     do{
        cout<<"ingrese su nota 2:"<<endl;
        cin>>nota2;
    }while(nota2<1||nota2>20);

     do{
        cout<<"ingrese su nota 3:"<<endl;
        cin>>nota3;
    }while(nota3<1||nota3>20);
    //usamos la funcion de promedio
    prom_notas=promedio(nota1,nota2,nota3);
    //imprimimos el resultado
    cout<<"el promedio de las notas es :"<<prom_notas;

    return 0;
}