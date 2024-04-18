#include <iostream>
#include <string>

using namespace std;

class Coches {
private:
    string modelo;
    int ano;
    double velocidad;

public:
    Coches(string modelo, int ano) : modelo(modelo), ano(ano), velocidad(0) {}

    void acelerar(double incremento) {
        velocidad += incremento;
        cout << "El coche acelera. Velocidad actual: " << velocidad << " km/h" << endl;
    }

    void frenar(double decremento) {
        if (velocidad - decremento < 0) {
            velocidad = 0;
        } else {
            velocidad -= decremento;
        }
        cout << "El coche frena. Velocidad actual: " << velocidad << " km/h" << endl;
    }
};

int main() {

   
    Coches coche1("Toyota Camry", 2022);
    Coches coche2("Ford Mustang", 2023);
    Coches coche3("Honda Civic", 2021);

    coche1.acelerar(50);
    coche2.acelerar(70);
    coche3.frenar(20);

    return 0;
}
