// CALCULO DEL AREA DE UN TRAPECIO

#include <iostream>

using namespace std;

int main()
{

    /*Declaro Variables y su tipo de dato*/

    float b, B, h, area;

    cout << "Bienvenido si deseas calcular el area de un trapecio";

    cout << " Ingrese la medida de la B ";
    cin >> B;

    cout << " Ingrese la medida de la b ";
    cin >> b;

    cout << " Ingrese la medida de la h ";
    cin >> h;

    // formula para calcular el area de un trapecio

    area = ((B + b) / 2) * h;

    cout << "El area del trapecio es: " << area << endl;

    system("pause");

    return 0;
}