#pragma once

#include <iostream>
#include <string>
#include "CPersona.h"

using namespace std;

class CCliente : public CPersona
{
private:
    string aEmail;   // Email del cliente
    double aCredito; // Cr�dito del cliente
    string aPreferencia; // Preferencia del cliente

public:
    // Constructor por defecto
    CCliente()
        : CPersona(), aEmail(""), aCredito(0.0), aPreferencia("") {}

    // Constructor con par�metros
    CCliente(string pDniRuc, string pNombre, string pTelefono, string pDireccion, string pEmail, double pCredito, string pPreferencia)
        : CPersona(pDniRuc, pNombre, pTelefono, pDireccion), aEmail(pEmail), aCredito(pCredito), aPreferencia(pPreferencia) {}

    // Setters y Getters para los atributos
    void setEmail(string pEmail) { aEmail = pEmail; }
    string getEmail() const { return aEmail; }

    void setCredito(double pCredito) { aCredito = pCredito; }
    double getCredito() const { return aCredito; }

    void setPreferencia(string pPreferencia) { aPreferencia = pPreferencia; }
    string getPreferencia() const { return aPreferencia; }

    // M�todo para leer datos de un cliente desde un formulario
    void leerDatosCliente(const string& dniRuc, const string& nombre, const string& telefono, const string& direccion, const string& email, double credito, const string& preferencia)
    {
        leerDatosPersona(dniRuc, nombre, telefono, direccion);
        aEmail = email;
        aCredito = credito;
        aPreferencia = preferencia;
    }

    // M�todo para mostrar datos de un cliente en un formulario
    void mostrarDatosCliente(string& dniRuc, string& email, double& credito, string& preferencia) const
    {
        dniRuc = aDniRuc;
        email = aEmail;
        credito = aCredito;
        preferencia = aPreferencia;
    }

    // M�todo para imprimir datos del cliente
    void imprimir() const
    {
        cout << "DNI/RUC: " << aDniRuc << endl;
        cout << "Nombre: " << aNombre << endl;
        cout << "Tel�fono: " << aTelefono << endl;
        cout << "Direcci�n: " << aDireccion << endl;
        cout << "Email: " << aEmail << endl;
        cout << "Cr�dito: " << aCredito << endl;
        cout << "Preferencia: " << aPreferencia << endl;
    }
};
