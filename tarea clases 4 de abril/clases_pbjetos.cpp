#include<iostream>
#include <string>
#include<stdlib.h>
using namespace std;
class alumno{
    private :
    //atributos
    string nombre,apellido;
    string codigo;
    float practica,trabajo_encargado,examen,medio_curso,exam_final;
    public ://metodos
    //constructor
        alumno(string,string,string,float,float,float,float,float);
        void promedio();
    };
    alumno::alumno(string _nombre,string _apellido, string _codigo, float _practica,float _trabajo_encargado, float _examen, float _medio_curso, float _exam_final ){
        nombre=_nombre;
        apellido=_apellido;
        codigo=_codigo;
        practica=_practica;
        trabajo_encargado=_trabajo_encargado;
        examen=_examen;
        medio_curso=_medio_curso;
        exam_final=_exam_final;
    }
    void alumno::promedio(){
        float _promedio;

        _promedio=(practica*0.10)+(trabajo_encargado*0.15)+(examen*0.25)+(medio_curso*0.25)+(exam_final*0.25);

        cout<<"el nombre completo del alumno es: "<<nombre<<" "<<apellido<<"\n"<<" su codigo es: "<<codigo<<" su promedio es: "<<_promedio;

    }

int main (){
    alumno alum1("carlos","rojas","123232",13,15,16,17,17);

    alum1.promedio();



}