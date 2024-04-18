#include <iostream>
#include <string>

using namespace std;


class Avion {
private:
    int combustible;

public:
    
    Avion(int combustibleInicial) {
        combustible = combustibleInicial;
    }

    
    bool tieneCombustibleSuficiente(int combustibleNecesario) {
        return combustible >= combustibleNecesario;
    }

    
    void consumirCombustible(int cantidad) {
        combustible -= cantidad;
    }
};


class Mision {
private:
    string destino;
    int duracion;
    int tripulacion;

public:
    
    Mision(string destino, int duracion, int tripulacion) {
        this->destino = destino;
        this->duracion = duracion;
        this->tripulacion = tripulacion;
    }

    
    void simularMision(Avion &avion) {
        
        int combustibleNecesario = duracion;

        
        if (avion.tieneCombustibleSuficiente(combustibleNecesario)) {
            cout << "El avion tiene suficiente combustible para completar la mision a " << destino << "." << endl;
            
            avion.consumirCombustible(combustibleNecesario);
        } else {
            cout << "El avion no tiene suficiente combustible para completar la mision a " << destino << "." << endl;
        }
    }
};

int main() {
    
    Avion avion(100);

    
    Mision mision("Nueva York", 8, 4); 

    
    mision.simularMision(avion);

    return 0;
}
