#pragma once

#include <vector>
#include <iostream>
#include "CProducto.h"

using namespace std;

class CArregloProductos
{
private:
    vector<CProducto*> productos;  // Vector de punteros a objetos CProducto

public:
    // Destructor para liberar la memoria
    ~CArregloProductos()
    {
        for (CProducto* producto : productos)
            delete producto;
    }

    // Método para obtener el número de productos
    int getNroProductos() const
    {
        return productos.size();
    }

    // Método para procesar los productos usando una función de orden superior
    void procesarProductos(void(*procesar)(CProducto*) = NULL)
    {
        for (CProducto* producto : productos)
        {
            if (procesar)
                procesar(producto);
            else
                producto->imprimir();
        }
    }

    // Método para encontrar la ubicación de un producto en el vector
    int ubicacion(const string& id) const
    {
        for (size_t i = 0; i < productos.size(); ++i)
        {
            if (productos[i]->getId() == id)
                return i;
        }
        return -1;
    }

    // Método para agregar un nuevo producto
    void agregarProducto(CProducto* producto)
    {
        int pos = ubicacion(producto->getId());
        if (pos == -1)
        {
            productos.push_back(producto);
        }
        else
        {
            cout << "El producto ya existe en el arreglo, por tanto, no se agregará..." << endl;
            delete producto;
        }
    }

    // Método para listar todos los productos
    void listarProductos()
    {
        cout << endl << "LISTA DE PRODUCTOS" << endl;
        cout << "==========================" << endl;
        procesarProductos();
    }

    // Método para listar productos por nombre
    void listarProductosPorNombre(const string& nombre)
    {
        cout << endl << "LISTA DE PRODUCTOS POR NOMBRE" << endl;
        cout << "==========================" << endl;
        for (CProducto* producto : productos)
        {
            string id, prodNombre;
            double precio;
            int cantidad;
            double peso;
            producto->mostrarDatosProducto(id, prodNombre, precio, cantidad, peso);
            if (prodNombre == nombre)
            {
                producto->imprimir();
                cout << "------------------" << endl;
            }
        }
    }

    // Métodos adicionales: actualizar y eliminar productos
    void actualizarProducto(const string& id, const CProducto& nuevoProducto)
    {
        int pos = ubicacion(id);
        if (pos != -1)
        {
            delete productos[pos];
            productos[pos] = new CProducto(nuevoProducto);
        }
        else
        {
            cout << "El producto no existe en el arreglo, por tanto, no se actualizará..." << endl;
        }
    }

    void eliminarProducto(const string& id)
    {
        int pos = ubicacion(id);
        if (pos != -1)
        {
            delete productos[pos];
            productos.erase(productos.begin() + pos);
        }
        else
        {
            cout << "El producto no existe en el arreglo, por tanto, no se eliminará..." << endl;
        }
    }
};
