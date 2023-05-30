#include <iostream>
using namespace std;
class servicio_taller{
    private:
    string nom_servicio;
    int costo;
    int horas;
    string nom_empleado;
    public:
    servicio_taller(string _nom_servicio="", int _costo=0,int _horas=0, string _nom_empleado=""){
        nom_servicio = _nom_servicio;
        costo = _costo;
        horas  = _horas;
        nom_empleado = _nom_empleado;
    }
    string getnom_servicio()
    {
        return nom_servicio;
    }
    void setnom_servicio(string _nom_servicio)
    {
        nom_servicio = _nom_servicio;
    }
    int getcosto()
    {
        return costo;
    }
    void setcosto(int _costo)
    {
        costo = _costo;
    }
    int gethoras()
    {
        return horas;
    }
    void sethoras(int _horas)
    {
        horas = _horas;
    }
    string getnom_empleado()
    {
        return nom_empleado;
    }
    void setnom_empleado(string _nom_empleado)
    {
        nom_empleado = _nom_empleado;
    }
     string getservicio_taller(){
        return "nombre: "+nom_servicio+"----tecnico: "+nom_empleado+"----costo: "+to_string(costo)+"----tiempo de demora: "+to_string(horas);
    }
};