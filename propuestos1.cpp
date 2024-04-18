#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class Auto {
private:
    int velocidad;

public:
    
    Auto() {
        velocidad = 0;
    }

    
    void acelerar(int incremento) {
        velocidad += incremento;
    }

    
    int getVelocidad() {
        return velocidad;
    }
};


class Carrera {
private:
    int distanciaTotal;
    int dificultadOponente;

public:
    
    Carrera(int distancia, int dificultad) {
        distanciaTotal = distancia;
        dificultadOponente = dificultad;
    }


    void simularCarrera(Auto &jugador) {
        Auto oponente;

        srand(time(0)); 

        
        while (jugador.getVelocidad() < distanciaTotal && oponente.getVelocidad() < distanciaTotal) {
            
            jugador.acelerar(rand() % 3 + 1);

            
            oponente.acelerar(rand() % dificultadOponente + 1);
        }

        
        if (jugador.getVelocidad() >= distanciaTotal && oponente.getVelocidad() >= distanciaTotal) {
            cout << "Es un empate!" << endl;
        } else if (jugador.getVelocidad() >= distanciaTotal) {
            cout << "Has ganado la carrera!" << endl;
        } else {
            cout << "La computadora ha ganado la carrera!" << endl;
        }
    }
};

int main() {
    
    Carrera carrera(1000, 5); 

    
    Auto jugador;

   
    carrera.simularCarrera(jugador);

    return 0;
}
