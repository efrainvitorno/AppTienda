#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "CProducto.h"

using namespace std;

class CCategoria
{
private:
    string aCategoria;     // Nombre de la categoría
    string aProveedor;     // Proveedor de la categoría
    string aDescripcion;   // Descripción de la categoría
    vector<CProducto*> aListaProductos; // Lista de productos en la categoría

public:
    // Constructor por defecto
    CCategoria()
        : aCategoria(""), aProveedor(""), aDescripcion("") {}

    // Constructor con parámetros
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

    // Método para leer datos de una categoría desde un formulario
    void leerDatosCategoria(const string& categoria, const string& proveedor, const string& descripcion)
    {
        aCategoria = categoria;
        aProveedor = proveedor;
        aDescripcion = descripcion;
    }

    // Método para mostrar datos de una categoría en un formulario
    void mostrarDatosCategoria(string& categoria, string& proveedor, string& descripcion) const
    {
        categoria = aCategoria;
        proveedor = aProveedor;
        descripcion = aDescripcion;
    }

    // Método para imprimir datos de la categoría
    void imprimir() const
    {
        cout << "Categoría: " << aCategoria << endl;
        cout << "Proveedor: " << aProveedor << endl;
        cout << "Descripción: " << aDescripcion << endl;
    }

    // Método para listar los productos de la categoría
    void listarProductos() const
    {
        cout << "Productos en la categoría: " << aCategoria << endl;
        for (const auto& producto : aListaProductos)
        {
            producto->imprimir();
            cout << "------------------" << endl;
        }
    }
};
