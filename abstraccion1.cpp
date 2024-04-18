#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string nombre;
    int edad;
    string tipo;

public:
    Animal(string nombre, int edad, string tipo) : nombre(nombre), edad(edad), tipo(tipo) {}

    void alimentar() {
        cout << nombre << " esta siendo alimentado." << endl;
    }

    void hacer_sonido() {
        cout << nombre << " hace un sonido." << endl;
    }
};

int main() {
   
    Animal perro("lucas", 5, "perro");

    perro.alimentar();
    perro.hacer_sonido();

    Animal gato("baguira", 3, "gato");

    gato.alimentar();
    gato.hacer_sonido();

    Animal loro("paul", 3, "loro");

    gato.alimentar();
    gato.hacer_sonido();


    return 0;
}

