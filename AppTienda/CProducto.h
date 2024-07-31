#pragma once

#include <iostream>
#include <string>
using namespace std;

class CProducto
{
protected:
    string aId;        // ID del producto
    string aNombre;    // Nombre del producto
    double aPrecio;    // Precio del producto
    int aCantidad;     // Cantidad del producto
    double aPeso;      // Peso del producto

public:
    // Constructor por defecto
    CProducto()
        : aId(""), aNombre(""), aPrecio(0.0), aCantidad(0), aPeso(0.0) {}

    // Constructor con parámetros
    CProducto(string pId, string pNombre, double pPrecio, int pCantidad, double pPeso)
        : aId(pId), aNombre(pNombre), aPrecio(pPrecio), aCantidad(pCantidad), aPeso(pPeso) {}

    // Setters y Getters para los atributos
    void setId(string pId) { aId = pId; }
    string getId() const { return aId; }

    void setNombre(string pNombre) { aNombre = pNombre; }
    string getNombre() const { return aNombre; }

    void setPrecio(double pPrecio) { aPrecio = pPrecio; }
    double getPrecio() const { return aPrecio; }

    void setCantidad(int pCantidad) { aCantidad = pCantidad; }
    int getCantidad() const { return aCantidad; }

    void setPeso(double pPeso) { aPeso = pPeso; }
    double getPeso() const { return aPeso; }

    // Método para leer datos de un producto desde un formulario
    void leerDatosProducto(const string& id, const string& nombre, double precio, int cantidad, double peso)
    {
        aId = id;
        aNombre = nombre;
        aPrecio = precio;
        aCantidad = cantidad;
        aPeso = peso;
    }

    // Método para mostrar datos de un producto en un formulario
    void mostrarDatosProducto(string& id, string& nombre, double& precio, int& cantidad, double& peso) const
    {
        id = aId;
        nombre = aNombre;
        precio = aPrecio;
        cantidad = aCantidad;
        peso = aPeso;
    }

    // Método para imprimir datos del producto
    void imprimir() const
    {
        cout << "ID: " << aId << endl;
        cout << "Nombre: " << aNombre << endl;
        cout << "Precio: " << aPrecio << endl;
        cout << "Cantidad: " << aCantidad << endl;
        cout << "Peso: " << aPeso << endl;
    }
};
