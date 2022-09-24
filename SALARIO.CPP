// Andy Aquino 0909-22-1669
// Ioni Rodas 0909-22-7492

#include <iostream>
#include <stdlib.h>
#include <fstream> 

using namespace std;

int main()
{

    string nombre;
    int carnet;
    float t_dia, t_hora, salario;

    cout << "Hola, vamos a calcular tu salario, por favor ingresa tu primer nombre y numero de empleado para continuar: " << endl;
    cout << "Ingresa tu primer nombre:" << endl;
    cin >> nombre;

    cout << "Ingresa tu numero de empleado:" << endl;
    cin >> carnet;

    cout  << nombre << ", ingresa tus dias laborados:" << endl;
    cin >> t_dia;

    cout  << nombre << ", ingresa ahora tus horas laboradas:" << endl;
    cin >> t_hora;

    salario = t_dia * 75.25 + t_hora * 14.75;

    cout << "Estimado "<< nombre << " con numero de empleado " << carnet <<  ", tu salario habiendo trabajado " << t_dia << " dias y " << t_hora << " horas es de: Q." << salario << endl;
    system("pause");

    ofstream TOTALSALARIO;  
    TOTALSALARIO.open ("TOTAL SALARIO.txt", ios::out);

    if (TOTALSALARIO.fail()) 
    {
       cout <<"ERROR AL ABRIR EL ARCHIVO";
       exit (1);
    }
    
    TOTALSALARIO << "Estimado "<< nombre << " con numero de empleado " << carnet <<  ", tu salario habiendo trabajado " << t_dia << " dias y " << t_hora << " horas es de: Q." << salario << endl;

    TOTALSALARIO.close();
    return 0;
}
