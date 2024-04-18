#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Producto {
private:
    string nombre;
    double precio;
    int cantidad;

public:
    
    Producto(string nombre, double precio, int cantidad) {
        this->nombre = nombre;
        this->precio = precio;
        this->cantidad = cantidad;
    }

    
    void setPrecio(double precio) {
        this->precio = precio;
    }

    void setCantidad(int cantidad) {
        this->cantidad = cantidad;
    }

    
    string getNombre() {
        return nombre;
    }

    double getPrecio() {
        return precio;
    }

    int getCantidad() {
        return cantidad;
    }
};

class Factura {
private:
    vector<Producto> listaProductos;

public:
    
    void agregarProducto(Producto producto) {
        listaProductos.push_back(producto);
    }

    
    void imprimirFactura() {
        cout << "Factura:" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Productos:" << endl;
        for ( auto &producto : listaProductos) {
            cout << "Nombre: " << producto.getNombre() << ", Precio: S/." << producto.getPrecio() << ", Cantidad: " << producto.getCantidad() << endl;
        }
        cout << "---------------------------------------" << endl;
    }
};

int main() {
    
    Factura factura;

    
    Producto producto1("Laptop", 1000.0, 2);
    Producto producto2("Mouse", 20.0, 5);

    factura.agregarProducto(producto1);
    factura.agregarProducto(producto2);

    // Imprimir la factura
    factura.imprimirFactura();

    return 0;
}
