#include <iostream>
#include "conio.h"
using namespace std;

int main() 

{

string electrodomestico;
float peso, distancia, producto, pesovol, totalpagar, largo, ancho, alto;

    cout << " HOLA BIENVENIDO A M&G SERVICIO DE TRANSPORTE DE PAQUETERIA " << endl;
    cout << " Vamos a calcular tu total a pagar por tu servicio de transporte " << endl;
    cout << " Por favor ingresa claramente los datos que se te pediran a contininuacion" << endl;
    cout << " " << endl;
    cout << " ¿Que tipo de producto deseas enviar?" << endl;
    cout << " " << endl;
    cout << "1. Electrodomesticos u otros " << endl;
    cout << "2. Documentos " << endl;
    cout << " " << endl;
    cin >> producto;

    if (producto = 1)
    {
         cout << "Especifica el tipo de electrodomestico a enviar" << endl;
         cin >> electrodomestico;
         cout << "Especifica las medidas de tu electrodomestico" << endl;
         cout << "Ingresa el largo" << endl;
         cin >> largo;
         cout << "Ingresa el ancho" << endl;
         cin >> ancho;
         cout << "Ingresa el alto" << endl;
         cin >> alto;
         peso = largo * ancho * alto / 2200;
         cout << "Especifica en KILOMETROS la distancia a enviar tu electrodomestico" << endl;
         cin >> distancia;
         distancia = distancia * 0.13;
         totalpagar = peso * 2.5 + distancia;

         cout << "El total a pagar por su paquete de " << electrodomestico << "con un peso de " << peso << " kilogramos es de Q." << totalpagar << endl;
        
    }
          
return 0;

}
