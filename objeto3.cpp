#include <iostream>
#include <string>

using namespace std;

class Biblioteca;


class Libro {
private:
    string titulo;
    bool prestado;

public:
    
    Libro(string titulo) {
        this->titulo = titulo;
        prestado = false; 
    }

    
     void prestar() {
        prestado = true;
    }

    
    void devolverLibro() {
        prestado = false;
    }

    
    bool estaPrestado() {
        return prestado;
    }

    
    string getTitulo() {
        return titulo;
    }
};


class Biblioteca {
public:
    
    void prestarLibro(Libro &libro) {
        if (!libro.estaPrestado()) {
            cout << "El libro '" << libro.getTitulo() << "' ha sido prestado." << endl;
        } else {
            cout << "El libro '" << libro.getTitulo() << "' ya esta prestado." << endl;
        }
    }
};

int main() {
    
    Biblioteca biblioteca;

    
    Libro libro1("El senor de los anillos");
    Libro libro2("Cien anios de soledad");

    
    biblioteca.prestarLibro(libro1);

    
    biblioteca.prestarLibro(libro1);

    
    biblioteca.prestarLibro(libro2);

    
    libro1.devolverLibro();

   
    biblioteca.prestarLibro(libro1);

    return 0;
}
