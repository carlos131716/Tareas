#include <iostream>
#include"moto.cpp"
#include"repuesto.cpp"
#include"servicio_taller.cpp"
using namespace std;
class cliente{
    private:
    string nombre;
    string apellido;
    int dni;
    public:
    cliente(string _nombre="", string _apellido="", int _dni=0){
        nombre = _nombre;
        apellido = _apellido;
        dni = _dni;
    }
    string getnombre()
    {
        return nombre;
    }
    void setnombre(string _nombre)
    {
        nombre = _nombre;
    }
    string getapellido()
    {
        return apellido;
    }
    void setapellido(string _apellido)
    {
        apellido = _apellido;
    }
    int getdni()
    {
        return dni;
    }
    void setdni(int _dni)
    {
        dni = _dni;
    }
    string getcliente(){
        return "nombre completo: "+nombre+" "+apellido+"-----DNI: "+to_string(dni);
    }
};