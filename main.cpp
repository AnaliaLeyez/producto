//Nombre: Analia Leyez
//TP Nº:
//EJ Nº:
/*Comentarios:
*/
#include "Producto.h"
#include "funciones.h"
#include<iostream> //para cin, cout y cerr
#include <locale>
#include <cstdlib> //para las funciones system, rand() y srand()
#include <cstring> //para las funciones strcpy, strcmp, strcat, strlen...
#include <ctime>   // Necesario para hacer time(0)
using namespace std;

int main(void)
{
    setlocale(LC_ALL, "Spanish");

    Producto prod1;
    /*
    prod1.Cargar();
    prod1.Mostrar();
    */
    prod1=cargarProducto();
    mostrarProducto(prod1);


    return 0;
}
