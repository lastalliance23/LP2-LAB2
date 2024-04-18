#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Producto {
private:
    string nombre;
    int cantidad;

public:
    
    Producto(string nombre, int cantidad) {
        this->nombre = nombre;
        this->cantidad = cantidad;
    }

    
    string getNombre() {
        return nombre;
    }

    
    int getCantidad() {
        return cantidad;
    }

    
    void actualizarCantidad(int nuevaCantidad) {
        cantidad = nuevaCantidad;
    }
};


class Inventario {
private:
    vector<Producto> disponibles;
    vector<Producto> agotados;

public:
    
    void agregarProducto(Producto producto) {
        if (producto.getCantidad() > 0) {
            disponibles.push_back(producto);
        } else {
            agotados.push_back(producto);
        }
    }

    void realizarPedido(string nombreProducto, int cantidad) {
        for (auto &producto : disponibles) {
            if (producto.getNombre() == nombreProducto) {
                int nuevaCantidad = producto.getCantidad() - cantidad;
                if (nuevaCantidad < 0) {
                    cout << "No hay suficientes unidades disponibles de " << nombreProducto << endl;
                    return;
                }
                producto.actualizarCantidad(nuevaCantidad);
                cout << "Pedido de " << cantidad << " unidades de " << nombreProducto << " realizado correctamente." << endl;
                return;
            }
        }
        cout << "El producto " << nombreProducto << " no está disponible en el inventario." << endl;
    }

    
    void imprimirProductosDisponibles() {
        cout << "Productos disponibles:" << endl;
        for ( auto &producto : disponibles) {
            cout << "- " << producto.getNombre() << ": " << producto.getCantidad() << " unidades" << endl;
        }
    }

    
    void imprimirProductosAgotados() {
        cout << "Productos agotados:" << endl;
        for ( auto &producto : agotados) {
            cout << "- " << producto.getNombre() << endl;
        }
    }
};

int main() {
    
    Inventario inventario;

    
    inventario.agregarProducto(Producto("Laptop", 10));
    inventario.agregarProducto(Producto("Smartphone", 20));
    inventario.agregarProducto(Producto("Tablet", 0)); 

    
    inventario.imprimirProductosDisponibles();
    inventario.imprimirProductosAgotados();

    
    inventario.realizarPedido("Laptop", 5);

    
    inventario.imprimirProductosDisponibles();

    return 0;
}
