#include "Producto.h"
#include "funciones.h"
#include<iostream> //para cin, cout y cerr
#include <cstring> //para las funciones strcpy, strcmp, strcat, strlen...

using namespace std; //para hacer uso de cin y cout sin tener que escribir std:: antes de cada una.

Producto::Producto(const char *n, float p, int s, int sm, int t)
{
    strcpy(_nombre, n);
    setPrecio(p);
    setStock(s);
    setStockMin(sm);
    setTipo(t);
}
char * Producto::getNombre()
{
    return _nombre;
}
float Producto::getPrecio()
{
    return _precio;
}
int Producto::getStock()
{
    return _stock;
}
int Producto::getStockMinimo()
{
    return _stockMinimo;
}
int Producto::getTipo()
{
    return _tipo;
}
void Producto::setNombre(const char *n)
{
    strcpy(_nombre, n);
}

/*No puede existir productos con stocks negativos
* Implementar un constructor por defecto que inicialice todo en cero o vacío .
* Implementar un constructor que me permita establecer valores iniciales.
* Implementar los métodos para poder establecer y obtener los valores.
* Los productos digitales siempre se pueden vender ya que no necesitan de stock */

void Producto::setPrecio(float p)
{
    if(p>0) _precio=p;
    else _precio=0;
}
void Producto::setStock(int s)
{
    if(s>0) _stock=s;
    else _stock=0;
}
void Producto::setStockMin(int sm)
{
    if(sm>=0) _stockMinimo=sm;
    else _stockMinimo=0;
}
void Producto::setTipo(int t)
{
    if(t==1 || t==2) _tipo=t;
    else t=0;
}
void Producto::Cargar()
{
    char nombre[15];
    float precio;
    int stock, stockMinimo,tipo;
    cout<<"INGRESE EL NOMBRE: ";
    cargarCadena(nombre, 15);
    this->setNombre(nombre);
    cout<<"INGRESE EL PRECIO: $";
    cin>>precio;
    this->setPrecio(precio);
    cout<<"INGRESE EL STOCK: ";
    cin>>stock;
    this->setStock(stock);
    cout<<"INGRESE EL STOCK MINIMO: ";
    cin>>stockMinimo;
    this->setStockMin(stockMinimo);
    cout<<"INGRESE EL TIPO: ";
    cin>>tipo;
    this->setTipo(tipo);
}
void Producto::Mostrar(){
    cout<<"NOMBRE: " << _nombre << endl;
    cout<<"PRECIO: $" << _precio << endl;
    cout<<"STOCK: " << _stock << endl;
    cout<<"STOCK MINIMO: " << _stockMinimo << endl;
    cout<<"TIPO: " << _tipo << endl;
}

