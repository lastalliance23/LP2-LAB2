#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Persona
class Persona {
private:
    string nombre;
    int edad;
    char genero;

public:
    // Constructor
    Persona(string nombre, int edad, char genero) {
        this->nombre = nombre;
        this->edad = edad;
        this->genero = genero;
    }

    // Métodos get
    string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }

    char getGenero() {
        return genero;
    }

    // Métodos set
    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    void setEdad(int edad) {
        this->edad = edad;
    }

    void setGenero(char genero) {
        this->genero = genero;
    }
};

class CuentaBancaria {
private:
    double saldo;
    string numeroCuenta;

public:
    
    CuentaBancaria(double saldoInicial, string numeroCuenta) {
        saldo = saldoInicial;
        this->numeroCuenta = numeroCuenta;
    }

    
    double getSaldo() {
        return saldo;
    }

    string getNumeroCuenta() {
        return numeroCuenta;
    }

    
    void setSaldo(double nuevoSaldo) {
        saldo = nuevoSaldo;
    }

    void setNumeroCuenta(string nuevoNumeroCuenta) {
        numeroCuenta = nuevoNumeroCuenta;
    }
};

int main() {
    Persona personas[3] = {
        Persona("Juan", 25, 'M'),
        Persona("Maria", 30, 'F'),
        Persona("Pedro", 40, 'M')
    };

    
    cout << "Personas:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Nombre: " << personas[i].getNombre() << ", Edad: " << personas[i].getEdad() << ", Genero: " << personas[i].getGenero() << endl;
    }

    
    CuentaBancaria cuentas[2] = {
        CuentaBancaria(1000.0, "123456789"),
        CuentaBancaria(2000.0, "987654321")
    };

   
    cout << "\nCuentas Bancarias:" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Saldo: S/." << cuentas[i].getSaldo() << ", Numero de Cuenta: " << cuentas[i].getNumeroCuenta() << endl;
    }

    return 0;
}
