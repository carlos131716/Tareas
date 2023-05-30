#include <iostream>
#include"cliente.cpp"
using namespace std;
class tienda
{
private:
    string nombre_tienda;
    string direccion;
    string telefono;
    string correo;
    moto motos[3];
    repuesto repuestos[6];
    servicio_taller servicios[4];

public:
    tienda(string _nombre_tienda = "", string _direccion = "", string _telefono = "", string _correo = "")
    {
        nombre_tienda = _nombre_tienda;
        direccion = _direccion;
        telefono = _telefono;
        correo = _correo;
    }
    string getnombre_tienda()
    {
        return nombre_tienda;
    }
    void setnombre_tienda(string _nombre_tienda)
    {
        nombre_tienda = _nombre_tienda;
    }
    string getdireccion()
    {
        return direccion;
    }
    void setdireccion(string _direccion)
    {
        direccion = _direccion;
    }
    string gettelefono()
    {
        return telefono;
    }
    void settelefono(string _telefono)
    {
        telefono = _telefono;
    }
    string getcorreo()
    {
        return correo;
    }
    void setcorreo(string _correo)
    {
        correo = _correo;
    }
    string getTienda()
    {
        return nombre_tienda;
    }
    string getdatos_tienda()
    {
        return "direccion: " + direccion + "-----telefono: " + telefono + "------correo: " + correo;
    }
    moto getmotos(int id)
    {
        return motos[id];
    }
    repuesto getrepuestos(int id)
    {
        return repuestos[id];
    }
    servicio_taller getservicios(int id)
    {
        return servicios[id];
    }
};