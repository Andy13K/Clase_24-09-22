#include <iostream> 
#include <stdlib.h>
#include <fstream> //libreria para el manejo de archivos

using namespace std;

void escribir ();  //funcion a crear mas adelante


/* CUERPO DEL PROGRAMA*/
int main ()
{

    escribir ();

    system ("PAUSE");
    return 0;
}

//FUNCION PARA CREAR EL ARCHIVO
void escribir()
{
    ofstream miarchivo;  //VARIABLE TIPO ARCHIVO (SIRVE PARA REPRESENTAR EL FLUJO DE CREACION Y ESCRITURA EN EL ARCHIVO)
    miarchivo.open ("MI PRIMER ARCHIVO.txt", ios::out); //ABRIR EL ARCHIVO, PERO SI NO EXISTE EL ARCHIVO SE CREA Y SE LE NOMBRA CON EL TEXTO DENTRO DE LAS COMILLAS

    if (miarchivo.fail())  //CONDICION EN CASO DE ERROR
    {
       cout <<"ERROR AL ABRIR EL ARCHIVO";
       exit (1);
    }
    //PARA ESCRIBIR DENTRO DEL DOCUMENTO CREADO USO EL NOMBRE DE LA VARIABLE Y LO QUE ESTE EN COMILLAS ESCRIBIRA
    miarchivo << "hoy es un dia genial";

    miarchivo.close(); //CERRAR ARCHIVO



}