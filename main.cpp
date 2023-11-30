/*
*  autor: Héctor Gúmaro Guzmán Reyes
*  fecha: 30/Nov/2023
*  programa: proyecto final Estructura de datos
*  desc: Control de ventas de una tienda de articulos de videojuegos
*/
#include <iostream>
#include <fstream>
#include <string>
#include <limits>  
#include "administrador.h"

int main() {
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
        }
        archivo.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

        Producto p;
        p.nombre = nombre;
        p.ventas = ventas;
        productos.push_back(p);
    }

    ordenar(productos);

    int opcion;
    do {
    	std::cout << "Registro de ventas Cool-Gaming";
        std::cout << "\nElige una opcion:\n1. Ver lista de productos\n2. Modificar ventas\n3. Agregar producto\n4. Eliminar producto\n5. Salir\n";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                imprimirConNumeros(productos);
                break;
            case 2: {
                int lugar;
                std::cout << "Introduce el numero del articulo que deseas modificar: ";
                std::cin >> lugar;

                int nuevasVentas;
                std::cout << "Introduce el nuevo numero de ventas: ";
                std::cin >> nuevasVentas;

                modificar(productos, lugar, nuevasVentas);
                break;
            }
            case 3: {
                std::string nuevoNombre;
                int nuevasVentas;
                std::cout << "Introduce el nombre del nuevo producto: ";
                std::cin >> nuevoNombre;
                std::cout << "Introduce el numero de ventas del nuevo producto: ";
                std::cin >> nuevasVentas;

                agregar(productos, nuevoNombre, nuevasVentas);
                break;
            }
            case 4: {
                int lugar;
                std::cout << "Introduce el numero del articulo que deseas eliminar: ";
                std::cin >> lugar;

                eliminar(productos, lugar);
                break;
            }
            case 5:
                std::cout << "Saliendo del programa...\n";
                break;
            default:
                std::cout << "Opcion no válida.\n";
                break;
        }

        if (opcion != 1 && opcion != 5) {
            ordenar(productos);
            imprimirConNumeros(productos);
        }
    } while (opcion != 5);

    escribirProductos(productos);

    archivo.close();

    return 0;
}

