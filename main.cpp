#include <iostream>
#include <fstream>
#include <string>
#include <limits>  
#include "administrador.h"

int main() {
    // Abre el archivo para lectura
    std::ifstream archivo("articulos_gaming.txt");

    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo." << std::endl;
        return 1;
    }

    std::string nombre;
    int ventas;
    std::vector<Producto> productos;

    while (std::getline(archivo, nombre, '-')) {
        if (!(archivo >> ventas)) {
            break;
        } //Implementacion para poder leer el txt correctamente
        archivo.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

        Producto p;
        p.nombre = nombre;
        p.ventas = ventas;
        productos.push_back(p);
    }

    // Ordena los productos por ventas
    ordenar(productos);

    // Imprime la lista de productos
    imprimirConNumeros(productos);

    // Solicita al usuario que introduzca el artículo que desea modificar
    int lugar;
    std::cout << "Introduce el numero del articulo que deseas modificar: ";
    std::cin >> lugar;

    // Solicita al usuario que introduzca el nuevo número de ventas
    int nuevasVentas;
    std::cout << "Introduce el nuevo numero de ventas: ";
    std::cin >> nuevasVentas;

    // Modifica el número de ventas del artículo
    modificar(productos, lugar, nuevasVentas);

    // Ordena los productos por ventas después de la modificación
    ordenar(productos);

    // Imprime la lista de productos después de la modificación
    imprimirConNumeros(productos);

    // Escribe los productos modificados en un nuevo archivo
    escribirProductos(productos);

    archivo.close();

    return 0;
}

