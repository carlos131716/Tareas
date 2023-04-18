#include <iostream>
using namespace std;

class Cuadrilatero
{
private:
    float lado_1;
    float lado_2;
    float base_1;
    float base_2;
    float altura;
    float diagonal_1;
    float diagonal_2;

public:
    Cuadrilatero(float _lado_1, float _lado_2, float _base_1, float _base_2, float _altura, float _diagonal_1, float _diagonal_2)
    {
        lado_1 = _lado_1;
        lado_2 = _lado_2;
        base_1 = _base_1;
        base_2 = _base_2;
        altura = _altura;
        diagonal_1 = _diagonal_1;
        diagonal_2 = _diagonal_2;
    }

    Cuadrilatero()
    {
        lado_1 = 0;
        lado_2 = 0;
        base_1 = 0;
        base_2 = 0;
        altura = 0;
        diagonal_1 = 0;
        diagonal_2 = 0;
    }

    float getLado1()
    {
        return lado_1;
    }
    void setLado1(float _lado_1)
    {
        lado_1 = _lado_1;
    }

    float getLado2()
    {
        return lado_2;
    }
    void setLado2(float _lado_2)
    {
        lado_2 = _lado_2;
    }

    float getBase1()
    {
        return base_1;
    }
    void setBase1(float base_1)
    {
        base_1 = base_1;
    }

    float getBase2()
    {
        return base_2;
    }
    void setBase2(float _base_2)
    {
        base_2 = _base_2;
    }

    float getAltura()
    {
        return altura;
    }
    void setAltura(float _altura)
    {
        altura = _altura;
    }

    float getDiagonal1()
    {
        return diagonal_1;
    }
    void setDiagonal1(float _diagonal_1)
    {
        diagonal_1 = _diagonal_1;
    }

    float getDiagonal2()
    {
        return diagonal_2;
    }
    void setDiagonal2(float _diagonal_2)
    {
        diagonal_2 = _diagonal_2;
    }

    //funcion para calcular el area
    float cuadrado_area()
    {
        float cuadrado = base_1 * lado_1;
        return cuadrado;
    }

    float rectangulo_area()
    {
        float rectangulo=base_1 * lado_1;
        return rectangulo;
    }

    float rombo_area()
    {
        float rombo=(diagonal_1 * diagonal_2) / 2;
        return rombo;
    }

    float trapecio_area()
    {
        float trapecio=((diagonal_1 + diagonal_2) / 2) * altura;
        return trapecio;
    }
    //funcion para calcular el perimetro
    float perimetro()
    {
        float perimetro=lado_1 + lado_2 + base_1 + base_2 + altura + diagonal_1 + diagonal_2;
        return perimetro;
    }

    //funcion para calcular el area y derteminar que tipo de cuadrilatero es CALCULAR AREA Y DETERMINAMOS QUE TIPO DE CUADRILATERO ES:
    void tipo_cuadrilatero()
    {
        // EVALUALR 4 OPCIONES:
        float cuadrado=cuadrado_area();
        float rectangulo=rectangulo_area();
        float rombo=rombo_area();
        float trapecio=trapecio_area();

        // CUADRADO
        if (base_1 == lado_1 && lado_1 == lado_2 && lado_2 == base_2 && diagonal_1 == diagonal_2)
        {
            cout<<"es un Cuadrado y su area es " << cuadrado_area()<<endl;
        }
        // RECTANGULO
        if (base_1 == base_2 && lado_1 == lado_2 && base_1 != lado_1 && base_2 != lado_2)
        {
            cout<<"es un Rectangulo y su area es " << rectangulo_area()<<endl;
        }
        // ROMBO
        if (base_1 == lado_1 && lado_1 == lado_2 && lado_2 == base_2 && base_1 == base_2 && diagonal_1
         != diagonal_2)
        {
            cout<<"es un Rombo y su area es " << rombo_area()<<endl;
        }

        // TRAPECIO
        if (base_1 != lado_1 && lado_1 != lado_2 && lado_2 != base_2 && diagonal_1 != diagonal_2)
        {
            cout<<"es un Trapecio y su area es " << trapecio_area()<<endl;
        }
    }
};

int main()
{
    // lado1 ---->lado2 ---->base1 ---->base2 ---->altura ---->diagonal1 ---->diagonal2
    Cuadrilatero Cuadrilatero_1(3, 4, 4, 4, 0, 0, 0);
    Cuadrilatero Cuadrilatero_2(4, 1, 8, 8, 0, 0, 0);
    Cuadrilatero Cuadrilatero_3(3, 3, 3, 3, 0, 5, 6);
    Cuadrilatero Cuadrilatero_4(5, 3, 4, 10, 10, 5, 6);

    // modificando los lados de C1 Y C2

    Cuadrilatero_1.setLado1(4);
    Cuadrilatero_2.setLado2(4);

    // Imprimimos cada cuadrilatero y sus perimetros

    Cuadrilatero_1.tipo_cuadrilatero();
    cout << " y su perimetro es " <<Cuadrilatero_1.perimetro()<< "\n";

    Cuadrilatero_2.tipo_cuadrilatero();
    cout << " y su perimetro es: " <<Cuadrilatero_2.perimetro()<< "\n";

    Cuadrilatero_3.tipo_cuadrilatero();
    cout << " y su perimetro es: " <<Cuadrilatero_3.perimetro()<< "\n";

    Cuadrilatero_4.tipo_cuadrilatero();
    cout << " y su perimetro es: " <<Cuadrilatero_4.perimetro()<< "\n";

    cout << "la suma total de todas las areas es: " << Cuadrilatero_1.cuadrado_area()
    + Cuadrilatero_2.rectangulo_area() + Cuadrilatero_3.rombo_area() + Cuadrilatero_4.trapecio_area()
     << "\n";

    cout << "la suma total de todos los perimetro como la suma de todos los lados es: "
    << Cuadrilatero_1.perimetro() + Cuadrilatero_2.perimetro() + Cuadrilatero_3.perimetro()
    + Cuadrilatero_4.perimetro() << "\n";
}