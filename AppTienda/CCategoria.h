#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "CProducto.h"

using namespace std;

class CCategoria
{
private:
    string aCategoria;     // Nombre de la categor�a
    string aProveedor;     // Proveedor de la categor�a
    string aDescripcion;   // Descripci�n de la categor�a
    vector<CProducto*> aListaProductos; // Lista de productos en la categor�a

public:
    // Constructor por defecto
    CCategoria()
        : aCategoria(""), aProveedor(""), aDescripcion("") {}

    // Constructor con par�metros
    CCategoria(string pCategoria, string pProveedor, string pDescripcion)
        : aCategoria(pCategoria), aProveedor(pProveedor), aDescripcion(pDescripcion) {}

    // Setters y Getters para los atributos
    void setCategoria(string pCategoria) { aCategoria = pCategoria; }
    string getCategoria() const { return aCategoria; }

    void setProveedor(string pProveedor) { aProveedor = pProveedor; }
    string getProveedor() const { return aProveedor; }

    void setDescripcion(string pDescripcion) { aDescripcion = pDescripcion; }
    string getDescripcion() const { return aDescripcion; }

    void agregarProducto(CProducto* producto)
    {
        aListaProductos.push_back(producto);
    }

    // M�todo para leer datos de una categor�a desde un formulario
    void leerDatosCategoria(const string& categoria, const string& proveedor, const string& descripcion)
    {
        aCategoria = categoria;
        aProveedor = proveedor;
        aDescripcion = descripcion;
    }

    // M�todo para mostrar datos de una categor�a en un formulario
    void mostrarDatosCategoria(string& categoria, string& proveedor, string& descripcion) const
    {
        categoria = aCategoria;
        proveedor = aProveedor;
        descripcion = aDescripcion;
    }

    // M�todo para imprimir datos de la categor�a
    void imprimir() const
    {
        cout << "Categor�a: " << aCategoria << endl;
        cout << "Proveedor: " << aProveedor << endl;
        cout << "Descripci�n: " << aDescripcion << endl;
    }

    // M�todo para listar los productos de la categor�a
    void listarProductos() const
    {
        cout << "Productos en la categor�a: " << aCategoria << endl;
        for (const auto& producto : aListaProductos)
        {
            producto->imprimir();
            cout << "------------------" << endl;
        }
    }
};
