#include <iostream>
using namespace std;
class moto{
    private:
    string nombre_moto;
    string color;
    string marca;
    string fecha_registro_moto;
    int cant_moto;
    int motor;
    int precio_moto;
    int fabricacion_anio;
    public:
    moto(string _nombre_moto="",string _color="",string _marca="",int cant_moto=0 ,int _motor=0,int _precio_moto=0, int _fabricacion_anio=0,string _fecha_registro_moto=""){
        nombre_moto = _nombre_moto;
        color = _color;
        marca = _marca;
        motor = _motor;
        precio_moto = _precio_moto;
        fabricacion_anio = _fabricacion_anio;
        fecha_registro_moto = _fecha_registro_moto;
    }
    string getnombre_moto()
    {
        return nombre_moto;
    }
    void setnombre_moto(string _nombre_moto)
    {
        nombre_moto = _nombre_moto;
    }
    string getcolor()
    {
        return color;
    }
    void setcolor(string _color)
    {
        color = _color;
    }
    string getmarca()
    {
        return marca;
    }
    void setmarca(string _marca)
    {
        marca = _marca;
    }
    int getprecio_moto()
    {
        return precio_moto;
    }
    void setprecio_moto(int _precio_moto)
    {
        precio_moto = _precio_moto;
    }
    int getmotor()
    {
        return motor;
    }
    void setmotor(int _motor)
    {
        motor = _motor;
    }
    int getfabricacion_anio()
    {
        return fabricacion_anio;
    }
    void setfabricacion_anio(int _fabricacion_anio)
    {
        fabricacion_anio = _fabricacion_anio;
    }
    string getfecha_registro_moto()
    {
        return fecha_registro_moto;
    }
    void setfecha_registro_moto(string _fecha_registro_moto)
    {
        fecha_registro_moto = _fecha_registro_moto;
    }
    string getmotos(){
        return "nombre: "+nombre_moto+"----cantidad: "+to_string(cant_moto)+"----costo: "+to_string(precio_moto)+"----fecha de registro: "+fecha_registro_moto;
    }
};