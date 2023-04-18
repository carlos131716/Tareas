#include <iostream>
using namespace std;

int main()
{
    // creamos el tamaño del arreglo y 
    int a[5];
    int tamanio = sizeof(a) / sizeof(a[0]);
     //hacemos un for para ingresar los datos
    for (int i = 0; i < tamanio; i++)
    {
        cout << "ingrese los valores" << endl;
        cin >> a[i];
    }


    // Numero mayor del arreglo 7
    int mayor = a[0]; // asigamos la variable mayor como a[0]
    for (int i = 1; i < tamanio; i++)
    {
        if (a[i] > mayor) // usamos el if para hacer una comparacion del primer arreglo a[1] si es "mayor" que a[0] osea la variable mayor
        {
            mayor = a[i]; // el arreglo que cumpla esta condicion se convierte en el nuevo mayor
        }
    }

    // Numero menor del arreglo 

    int menor = a[0];                 // asigamos la variable menor como a[0]
    for (int i = 1; i < tamanio; i++) // ponemos que el bucle comience en 1 porque el 0 ya lo tenemos asignado
    {
        if (a[i] < menor) // usamos el if para hacer una comparacion del primer arreglo a[1] si es "menor" que a[0] osea la variable menor
        {
            menor = a[i]; // el arreglo que cumpla esta condicion se convierte en el nuevo menor
        }
    }
    
    
    

    // imprimimos cada variables de los bucles anteriores
    cout << "el numero mayor es " << mayor << endl;
    cout << "el numero menor es " << menor << endl;
    // imprimimos esto para el siguiente bucle
   

    // Numero que se repiden en el arreglo 
    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = i + 1; j < tamanio; j++)
        {
            if (a[i] == a[j])
            {
                cout << "los numeros que se repiten en el arreglo son: " << a[i];
                break;
            }
        }
    }
    
    // PARA HALLAR LA MEDIANA TENEMOS QUE ORDENARLO DE MAYOR A MENOR
    int mediana;
    for (int i = 0; i < tamanio - 1; i++)
    {
        for (int j = 0; j < tamanio - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int tempo = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tempo;
            }
        }
    }

    //HALLAMOS LA  MEDIANA

    mediana = (tamanio - 1) / 2;
    cout << endl
         << "La mediana es: " << a[mediana];
    
    a[mediana] = 25;
    cout << endl
         << "El nuevo valor de la media es: " << a[mediana];
   

    return 0;
}