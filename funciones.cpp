#include "funciones.h"
#include "Producto.h"
#include<iostream> //para cin, cout y cerr
#include <cstring> //para las funciones strcpy, strcmp, strcat, strlen, fflush...
#include <cstdio> //para fflush
using namespace std; //para hacer uso de cin y cout sin tener que escribir std:: antes de cada una.

void cargarCadena(char *palabra, int tamano)
{
    int i=0;
    fflush(stdin);

    for (i=0; i<tamano; i++)
    {
        palabra[i]=cin.get();
        if (palabra[i]=='\n')
            break;
    }
    palabra[i]='\0';
    fflush(stdin);
}

Producto cargarProducto(){
    Producto producto;
    producto.Cargar();
    return producto;
}

void mostrarProducto(Producto producto){
/* Si el stock del producto es inferior o igual al
mínimo, debe informar al usuario que hay que reponer el stock del producto. */
 producto.Mostrar();
 if(producto.getStock()<=producto.getStockMinimo() && producto.getTipo()==1)
    cout << "======REPONER STOCK URGENTE======"<< endl;
 cout << "valuacion: ";
 if(producto.getTipo()==2)
    cout << "0" << endl;
 else
    cout << producto.getStock() * producto.getPrecio() << endl;
}
