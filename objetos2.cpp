#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
    char genero;

public:
  
    Persona(string nombre, int edad, char genero) {
        this->nombre = nombre;
        this->edad = edad;
        this->genero = genero;
    }


    string getNombre() {
        return nombre;
    }

    int getEdad() {
        return edad;
    }

    char getGenero() {
        return genero;
    }

    
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

    // Métodos set
    void setSaldo(double nuevoSaldo) {
        saldo = nuevoSaldo;
    }

    void setNumeroCuenta(string nuevoNumeroCuenta) {
        numeroCuenta = nuevoNumeroCuenta;
    }
};

int main() {
    
    Persona persona("Juan", 25, 'M');

    
    cout << "Nombre de la persona: " << persona.getNombre() << endl;
    cout << "Edad de la persona: " << persona.getEdad() << endl;
    cout << "Género de la persona: " << persona.getGenero() << endl;

    
    persona.setEdad(30);
    persona.setGenero('F');

   
    cout << "\nNueva edad de la persona: " << persona.getEdad() << endl;
    cout << "Nuevo género de la persona: " << persona.getGenero() << endl;

   
    CuentaBancaria cuenta(1000.0, "1234567890");

    
    cout << "\nSaldo de la cuenta bancaria: $" << cuenta.getSaldo() << endl;
    cout << "Número de cuenta bancaria: " << cuenta.getNumeroCuenta() << endl;

    
    cuenta.setSaldo(1500.0);
    cuenta.setNumeroCuenta("9876543210");

    
    cout << "\nNuevo saldo de la cuenta bancaria: $" << cuenta.getSaldo() << endl;
    cout << "Nuevo número de cuenta bancaria: " << cuenta.getNumeroCuenta() << endl;

    return 0;
}
