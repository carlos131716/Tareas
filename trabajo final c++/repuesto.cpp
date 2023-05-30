#include <iostream>
using namespace std;
class repuesto{
    private:
    string nom_repuesto;
    int precio_repuesto;
    int cant_repuesto;
    string fecha_registro_repuesto;
    string asesor;
    public:
    repuesto(string _nom_repuesto="", int _precio_repuesto=0,int _cant_repuesto=0,string _asesor="",string _fecha_registro_repuesto=""){
        nom_repuesto = _nom_repuesto;
        precio_repuesto = _precio_repuesto;
        cant_repuesto = _cant_repuesto;
        fecha_registro_repuesto = _fecha_registro_repuesto;
        asesor = _asesor;
    }
    string getnom_repuesto()
    {
        return nom_repuesto;
    }
    void setnom_repuesto(string _nom_repuesto)
    {
        nom_repuesto = _nom_repuesto;
    }
    int getprecio_repuesto()
    {
        return precio_repuesto;
    }
    void setprecio_repuesto(int _precio_repuesto)
    {
        precio_repuesto = _precio_repuesto;
    }
    string getfecha_registro_repuesto()
    {
        return fecha_registro_repuesto;
    }
    void setfecha_registro_repuesto(string _fecha_registro_repuesto)
    {
        fecha_registro_repuesto = _fecha_registro_repuesto;
    }
    string getasesor()
    {
        return asesor;
    }
    void setasesor(string _asesor)
    {
        asesor = _asesor;
    }
    int getcant_repuesto()
    {
        return cant_repuesto;
    }
    void setcant_repuesto(int _cant_repuesto)
    {
        cant_repuesto = _cant_repuesto;
    }
    string getrepuesto(){
        return "nombre: "+nom_repuesto+"----cantidad: "+to_string(cant_repuesto)+"----costo: "+to_string(precio_repuesto)+"----fecha de registro: "+fecha_registro_repuesto;
    }
};