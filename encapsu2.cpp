#include <iostream>
#include <string>

using namespace std;

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
    
    CuentaBancaria cuenta1(1000.0, "123456789");
    CuentaBancaria cuenta2(500.0, "987654321");

    
    cout << "Saldo de cuenta1: S/." << cuenta1.getSaldo() << endl;
    cout << "Numero de cuenta de cuenta1: " << cuenta1.getNumeroCuenta() << endl;

    
    cuenta2.setSaldo(700.0);
    cuenta2.setNumeroCuenta("24681012");

   
    cout << "\nSaldo de cuenta2: S/." << cuenta2.getSaldo() << endl;
    cout << "Numero de cuenta de cuenta2: " << cuenta2.getNumeroCuenta() << endl;

    return 0;
}
