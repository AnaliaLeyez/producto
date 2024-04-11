#pragma once

class Producto{
    private:
char _nombre[15];
float _precio;
int _stock;
int _stockMinimo;
int _tipo;
    public:
        Producto(const char *n="", float p=0, int s=0, int sm=0, int t=0);
        char * getNombre();
        float getPrecio();
        int getStock();
        int getStockMinimo();
        int getTipo();
        void setNombre(const char *n);
        void setPrecio(float p);
        void setStock(int s);
        void setStockMin(int sm);
        void setTipo(int t);
        void Cargar();
        void Mostrar();
};
