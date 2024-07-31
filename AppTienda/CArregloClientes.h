#pragma once

#include <vector>
#include <iostream>
#include "CCliente.h"

using namespace std;

class CArregloClientes
{
private:
    vector<CCliente*> clientes;  // Vector de punteros a objetos CCliente

public:
    // Destructor para liberar la memoria
    ~CArregloClientes()
    {
        for (CCliente* cliente : clientes)
            delete cliente;
    }

    // M�todo para obtener el n�mero de clientes
    int getNroClientes() const
    {
        return clientes.size();
    }

    // M�todo para procesar los clientes usando una funci�n de orden superior
    void procesarClientes(void(*procesar)(CCliente*) = NULL)
    {
        for (CCliente* cliente : clientes)
        {
            if (procesar)
                procesar(cliente);
            else
                cliente->imprimir();
        }
    }

    // M�todo para encontrar la ubicaci�n de un cliente en el vector
    int ubicacion(const string& dniRuc) const
    {
        for (size_t i = 0; i < clientes.size(); ++i)
        {
            if (clientes[i]->getDniRuc() == dniRuc)
                return i;
        }
        return -1;
    }

    // M�todo para agregar un nuevo cliente
    void agregarCliente(CCliente* cliente)
    {
        int pos = ubicacion(cliente->getDniRuc());
        if (pos == -1)
        {
            clientes.push_back(cliente);
        }
        else
        {
            cout << "El cliente ya existe en el arreglo, por tanto, no se agregar�..." << endl;
            delete cliente;
        }
    }

    // M�todo para listar todos los clientes
    void listarClientes()
    {
        cout << endl << "LISTA DE CLIENTES" << endl;
        cout << "==========================" << endl;
        procesarClientes();
    }

    // M�todo para listar clientes por preferencia
    void listarClientesPorPreferencia(const string& preferencia)
    {
        cout << endl << "LISTA DE CLIENTES POR PREFERENCIA" << endl;
        cout << "==========================" << endl;
        for (CCliente* cliente : clientes)
        {
            string dniRuc, email, pref;
            double credito;
            cliente->mostrarDatosCliente(dniRuc, email, credito, pref);
            if (pref == preferencia)
            {
                cliente->imprimir();
                cout << "------------------" << endl;
            }
        }
    }

    // M�todos adicionales: actualizar y eliminar clientes
    void actualizarCliente(const string& dniRuc, const CCliente& nuevoCliente)
    {
        int pos = ubicacion(dniRuc);
        if (pos != -1)
        {
            delete clientes[pos];
            clientes[pos] = new CCliente(nuevoCliente);
        }
        else
        {
            cout << "El cliente no existe en el arreglo, por tanto, no se actualizar�..." << endl;
        }
    }

    void eliminarCliente(const string& dniRuc)
    {
        int pos = ubicacion(dniRuc);
        if (pos != -1)
        {
            delete clientes[pos];
            clientes.erase(clientes.begin() + pos);
        }
        else
        {
            cout << "El cliente no existe en el arreglo, por tanto, no se eliminar�..." << endl;
        }
    }
};
