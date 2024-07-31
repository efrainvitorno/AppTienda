#pragma once

#include <vector>
#include <iostream>
#include "CVentas.h"

using namespace std;

class CArregloVentas
{
private:
    vector<CVentas*> aListaVentas; // Lista de ventas

public:
    // Destructor para liberar la memoria
    ~CArregloVentas()
    {
        for (CVentas* venta : aListaVentas)
            delete venta;
    }

    // Método para agregar una venta al arreglo
    void agregarVenta(CVentas* venta)
    {
        if (venta != NULL)
        {
            aListaVentas.push_back(venta);
        }
    }

    // Método para listar todas las ventas
    void listarVentas() const
    {
        cout << endl << "LISTA DE VENTAS" << endl;
        cout << "==========================" << endl;
        for (const auto& venta : aListaVentas)
        {
            if (venta != NULL)
            {
                venta->imprimir();
                cout << "==========================" << endl;
            }
        }
    }

    // Método para buscar una venta por ID
    CVentas* buscarVentaPorId(const string& id) const
    {
        for (const auto& venta : aListaVentas)
        {
            if (venta != NULL && venta->getId() == id)
                return venta;
        }
        return NULL;
    }

    // Método para actualizar una venta por ID
    void actualizarVenta(const string& id, const CVentas& nuevaVenta)
    {
        for (auto& venta : aListaVentas)
        {
            if (venta != NULL && venta->getId() == id)
            {
                delete venta;
                venta = new CVentas(nuevaVenta);
                return;
            }
        }
        cout << "Venta con ID " << id << " no encontrada." << endl;
    }

    // Método para eliminar una venta por ID
    void eliminarVenta(const string& id)
    {
        for (auto it = aListaVentas.begin(); it != aListaVentas.end(); ++it)
        {
            if (*it != NULL && (*it)->getId() == id)
            {
                delete* it;
                aListaVentas.erase(it);
                return;
            }
        }
        cout << "Venta con ID " << id << " no encontrada." << endl;
    }
};
