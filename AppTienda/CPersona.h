#pragma once

#include <iostream>
#include <string>
using namespace std;

class CPersona
{
protected:
    string aDniRuc;  // DNI o RUC de la persona
    string aNombre;  // Nombre de la persona
    string aTelefono;  // Teléfono de la persona
    string aDireccion;  // Dirección de la persona

public:
    // Constructor por defecto
    CPersona()
        : aDniRuc(""), aNombre(""), aTelefono(""), aDireccion("") {}

    // Constructor con parámetros
    CPersona(string pDniRuc, string pNombre, string pTelefono, string pDireccion)
        : aDniRuc(pDniRuc), aNombre(pNombre), aTelefono(pTelefono), aDireccion(pDireccion) {}

    // Setters y Getters para los atributos
    void setDniRuc(string pDniRuc) { aDniRuc = pDniRuc; }
    string getDniRuc() const { return aDniRuc; }

    void setNombre(string pNombre) { aNombre = pNombre; }
    string getNombre() const { return aNombre; }

    void setTelefono(string pTelefono) { aTelefono = pTelefono; }
    string getTelefono() const { return aTelefono; }

    void setDireccion(string pDireccion) { aDireccion = pDireccion; }
    string getDireccion() const { return aDireccion; }

    // Método para leer datos de una persona desde un formulario
    void leerDatosPersona(const string& dniRuc, const string& nombre, const string& telefono, const string& direccion)
    {
        aDniRuc = dniRuc;
        aNombre = nombre;
        aTelefono = telefono;
        aDireccion = direccion;
    }

    // Método para mostrar datos de una persona en un formulario
    void mostrarDatosPersona(string& dniRuc, string& nombre, string& telefono, string& direccion) const
    {
        dniRuc = aDniRuc;
        nombre = aNombre;
        telefono = aTelefono;
        direccion = aDireccion;
    }
};
