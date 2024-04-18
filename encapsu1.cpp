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

int main() {
    
    Persona persona1("Juan", 25, 'M');
    Persona persona2("Maria", 30, 'F');

    
    cout << "Nombre de persona1: " << persona1.getNombre() << endl;
    cout << "Edad de persona1: " << persona1.getEdad() << endl;
    cout << "Genero de persona1: " << persona1.getGenero() << endl;

   
    persona2.setEdad(35);
    persona2.setGenero('F');

    
    cout << "\nNombre de persona2: " << persona2.getNombre() << endl;
    cout << "Edad de persona2: " << persona2.getEdad() << endl;
    cout << "Genero de persona2: " << persona2.getGenero() << endl;

    return 0;
}
