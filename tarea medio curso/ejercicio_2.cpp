//ejercicio para calcular el perimetro y el area de un triangulo
#include<iostream>
using namespace std;
//aca hacemos una funcion para hallar el area de un triangulo
int  area_triangulos(int altura, int base){
	int operacion_area=0;
	operacion_area=(altura*base)/2;
	return operacion_area;
	}
//aca hacemos una funcion para hallar el primetro del triangulo	
int perimetro_triangulo(int cateto_adyacente, int cateto_opuesto, int hipotenusa){
    int operacion_peri=0;
	operacion_peri=cateto_adyacente+cateto_opuesto+hipotenusa;
    return operacion_peri;
}    
	int main (){
		int area;
        int cat_adyacente,cat_opuesto,hipotenusa;
		int base;
		int altura;
        int peri_triangulo;
		//aca pedimos los datos para hallar el triangulo
		cout<<"ingrese datos para hallar area del triangulo "<<endl;
		cout<<"ingrese la altura del triangulo"<<endl;
		cin>>altura;
		cout<<"ingrese la base del triangulo"<<endl;
		cin>>base;
		//aca pedimos lo datos para hallar el perimetro de un triangulo
		cout<<"ingrese datos para hallar el primetro del triangulo "<<endl;
		cout<<"ingrese el cateto adyacente del triangulo"<<endl;
		cin>>cat_adyacente;
        cout<<"ingrese el cateto opuesto del triangulo"<<endl;
		cin>>cat_opuesto;
        cout<<"ingrese la hipotenusa del triangulo"<<endl;
		cin>>hipotenusa;
		// esto se utiliza para poder usar la funcion de la operacion de cada funcion
		area=area_triangulos(altura,base);
		peri_triangulo=perimetro_triangulo(cat_adyacente,cat_opuesto,hipotenusa);
		//imprimimos los resultados
		cout<<"el area del triangulo es :"<<area<<endl;
        cout<<"el perimetro del triangulo es :"<<peri_triangulo<<endl;
		return 0;
	}