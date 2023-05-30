#include <iostream>
#include "tienda_2.cpp"
using namespace std;
int main()
{
    tienda tienda_1("Motorin", "Av. raymondi", "06256473", "motorin16@gmail.com");

    cliente cliente_1("carlos", "fernandez", 23001492);

    moto moto_1("navi", "negro", "honda", 10, 110, 4000, 2021, "01/06/2015");
    moto moto_2("tornado", "blanco", "yamaha", 15, 150, 12000, 2013, "16/06/2009");
    moto moto_3("motocross", "gris", "yamaha", 5, 250, 8000, 2020, "26/06/2018");

    repuesto repuesto_1("espejo de moto", 20, 15, "juan", "13/06/2018");
    repuesto repuesto_2("llanta ", 60, 10, "juan", "10/11/2016");
    repuesto repuesto_3("parche para llanta", 10, 20, "juan", "19/06/2017");
    repuesto repuesto_4("aceite", 50, 14, "juan", "17/08/2015");
    repuesto repuesto_5("cascos", 30, 6, "juan", "11/11/2015");
    repuesto repuesto_6("bateria", 80, 8, "juan", "14/10/2016");

    servicio_taller servicio_1("cambio de espejo", 10, 1, "martin");
    servicio_taller servicio_2("parchada de llanta", 5, 1, "martin");
    servicio_taller servicio_3("ajuste de freno", 10, 1, "martin");
    servicio_taller servicio_4("mantenimiento", 80, 10, "jose");

    moto motos[3] = {moto_1, moto_2, moto_3};
    repuesto repuestos[6] = {repuesto_1, repuesto_2, repuesto_3, repuesto_4, repuesto_5, repuesto_6};
    servicio_taller servicios[4] = {servicio_1, servicio_2, servicio_3, servicio_4};

    int opcion;
    cout << "Bienvenido/a a la tienda de motos Motorin" << endl;
    cout << "----------------------------------------" << endl;
    cout <<  "             CLIENTE"<<endl;
    cout<<cliente_1.getcliente()<<endl;;

    do
    {
        cout << "MENU DE OPCIONES" << endl;
        cout << "[1] Ver stock de repuestos" << endl;
        cout << "[2] Ver stock de motos" << endl;
        cout << "[3] Comprar servicio" << endl;
        cout << "[0] SALIR" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion == 1)
        {
            // Ver stock de repuestos
            cout << "Stock de Repuestos:" << endl;
            for (int i = 0; i < 6; ++i)
            {
                cout << i + 1 << ". ";
                cout << repuestos[i].getrepuesto();
                cout << endl;
            }
            cout << "Opciones:" << endl;
            cout << "[0] Volver al menú" << endl;
            cout << "Ingrese el número de repuesto a comprar (1-6): ";
            int opcionRepuesto;
            cin >> opcionRepuesto;

            if (opcionRepuesto >= 1 && opcionRepuesto <= 6)
            {
                int cantidad;

                cout << "Ingrese la cantidad a comprar: ";
                cin >> cantidad;

                // Realizar la compra del repuesto seleccionado (opcionRepuesto)

                cout << "¡Compra realizada con éxito!" << endl;
            }
        }
        else if (opcion == 2)
        {
            // Ver stock de motos
            cout << "Stock de Motos:" << endl;
            for (int i = 0; i < 3; ++i)
            {
                cout << i + 1 << ". ";
                cout << motos[i].getmotos();
                cout << endl;
            }
            cout << "Opciones:" << endl;
            cout << "[0] Volver al menú" << endl;
            cout << "Ingrese el número de moto a comprar (1-3): ";
            int opcionMoto;
            cin >> opcionMoto;

            if (opcionMoto >= 1 && opcionMoto <= 3)
            {
                int cantidad;

                cout << "Ingrese la cantidad a comprar: ";
                cin >> cantidad;

                // Realizar la compra de la moto seleccionada (opcionMoto)

                cout << "¡Compra realizada con éxito!" << endl;
            }
        }
        else if (opcion == 3)
        {
            // Comprar servicio
            cout << "Servicios realizados:" << endl;
            for (int i = 0; i < 4; ++i)
            {
                cout << i + 1 << ". ";
                cout << servicios[i].getservicio_taller();
                cout << endl;
            }
            cout << "Opciones:" << endl;
            cout << "[0] Volver al menú" << endl;
            cout << "Ingrese el número de servicio a comprar (1-4): ";
            int opcionServicio;
            cin >> opcionServicio;

            if (opcionServicio >= 1 && opcionServicio <= 4)
            {
                // Realizar la compra del servicio seleccionado (opcionServicio)

                cout << "¡Compra realizada con éxito!" << endl;
                cout << endl;
                int volver;
                cout << "Presione [5] para volver al menú" << endl;
                cout << "finalizar la compra presione[0]" << endl;
                cin >> volver;
            }
        }

    } while (opcion != 0);

    cout << "¡Gracias por visitar la tienda Motorin!" << endl;

    return 0;
}