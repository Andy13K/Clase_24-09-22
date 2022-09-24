// Andy Aquino 0909-22-1669
// Ioni Rodas 0909-22-7492

#include <iostream>
#include <stdlib.h>
#include <fstream> 

using namespace std;

int main()
{

    float numP, tbase, iva, inguat, tfinal;

    cout << " Bienvenido al algoritmo que te ayudara a calcular la tarifa total para tu habitacion en el hotel: " << endl; 

    cout << " Ingrese la cantidad de personas que se hospedaran en la habitacion: " << endl;
    cin >> numP;
    cout << "" << endl;
    tbase = numP * 85;
    iva = tbase * 0.12;
    inguat = tbase * 0.10;
    tfinal = tbase + iva + inguat;
    
    cout << " El total de una habitacion para " << numP << " personas es de:" << endl;
    cout << " Tarifa base de: Q." << tbase << endl;
    cout << " El IVA a pagar es de Q." << iva << endl;
    cout << " El INGUAT a pagar es de Q." << inguat << endl;
    cout << " La tarifa total a pagar es de: Q." << tfinal << endl;
    system("pause");

    ofstream TotalHotel;  
    TotalHotel.open ("TOTAL A PAGAR HOTEL.txt", ios::out);

    if (TotalHotel.fail()) 
    {
       cout <<"ERROR AL ABRIR EL ARCHIVO";
       exit (1);
    }
    
    TotalHotel << "El total de una habitacion para " << numP << " personas es de:" << endl << "Tarifa base es de: Q." << tbase << endl << "El IVA a pagar es de Q." << iva << endl << "El INGUAT a pagar es de Q." << inguat << endl << "La tarifa total a pagar es de: Q." << tfinal << endl;

    TotalHotel.close();
    return 0;

    return 0;
}