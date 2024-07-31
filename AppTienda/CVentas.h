#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "CProducto.h"

using namespace std;

class CVentas
{
private:
    string aDniRuc;              // DNI o RUC del cliente
    string aId;                  // ID de la venta
    double aDescuento;           // Descuento aplicado a la venta
    vector<CProducto*> aListaProductos; // Lista de productos en la venta
    double totalVenta;           // Total de la venta
    string fechaVenta;           // Fecha de la venta

public:
    // Constructor por defecto
    CVentas()
        : aDniRuc(""), aId(""), aDescuento(0.0), totalVenta(0.0), fechaVenta("") {}

    // Constructor con parámetros
    CVentas(const string& pDniRuc, const string& pId, double pDescuento, double pTotalVenta, const string& pFechaVenta)
        : aDniRuc(pDniRuc), aId(pId), aDescuento(pDescuento), totalVenta(pTotalVenta), fechaVenta(pFechaVenta) {}

    // Setters y Getters para los atributos
    void setDniRuc(const string& pDniRuc) { aDniRuc = pDniRuc; }
    string getDniRuc() const { return aDniRuc; }

    void setId(const string& pId) { aId = pId; }
    string getId() const { return aId; }

    void setDescuento(double pDescuento) { aDescuento = pDescuento; }
    double getDescuento() const { return aDescuento; }

    void setTotalVenta(double pTotalVenta) { totalVenta = pTotalVenta; }
    double getTotalVenta() const { return totalVenta; }

    void setFechaVenta(const string& pFechaVenta) { fechaVenta = pFechaVenta; }
    string getFechaVenta() const { return fechaVenta; }

    // Método para agregar un producto a la venta
    void agregarProducto(CProducto* producto)
    {
        if (producto != NULL)
        {
            aListaProductos.push_back(producto);
            // Actualizar el total de la venta
            totalVenta += producto->getPrecio() * producto->getCantidad();
        }
    }

    // Método para calcular el total de la venta después de aplicar el descuento
    void calcularTotalVenta()
    {
        totalVenta -= totalVenta * (aDescuento / 100);
    }

    // Métodos para obtener datos en formato adecuado para los formularios
    void obtenerDatosFormulario(string& dniRuc, string& id, double& descuento, double& total, string& fecha) const
    {
        dniRuc = aDniRuc;
        id = aId;
        descuento = aDescuento;
        total = totalVenta;
        fecha = fechaVenta;
    }

    void establecerDatosFormulario(const string& dniRuc, const string& id, double descuento, double total, const string& fecha)
    {
        aDniRuc = dniRuc;
        aId = id;
        aDescuento = descuento;
        totalVenta = total;
        fechaVenta = fecha;
    }

    // Método para imprimir los detalles de la venta
    void imprimir() const
    {
        cout << "DNI/RUC del cliente: " << aDniRuc << endl;
        cout << "ID de la venta: " << aId << endl;
        cout << "Descuento aplicado: " << aDescuento << "%" << endl;
        cout << "Total de la venta: " << totalVenta << endl;
        cout << "Fecha de la venta: " << fechaVenta << endl;
        cout << "Productos en la venta: " << endl;
        for (const auto& producto : aListaProductos)
        {
            if (producto != NULL)
            {
                producto->imprimir();
                cout << "------------------" << endl;
            }
        }
    }
};
