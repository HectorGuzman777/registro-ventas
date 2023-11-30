#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <vector>
#include <algorithm>
#include <iostream>
#include <cctype>  
#include <fstream>

struct Producto {
    int ventas;
    std::string nombre;
};
//Compara los productos
bool compararProductos(const Producto& a, const Producto& b) {
    return a.ventas > b.ventas;
}
//ordena los prodecutos de mayor a menor utilizando la funcion std::sort de la libreria de c++
void ordenar(std::vector<Producto>& productos) { //complejidad: o(n)
    std::sort(productos.begin(), productos.end(), compararProductos); //complejidad: o(n log n)
}
//funcion para darle formato
void imprimirConNumeros(const std::vector<Producto>& productos) {
    for (int i = 0; i < productos.size(); ++i) {
        std::cout << i+1 << " ventas: " << productos[i].ventas << " Nombre: " << productos[i].nombre << std::endl;
    }
}
//modifica la lista segun el numero de ventas que haya cambiado el usuario
void modificar(std::vector<Producto>& productos, int lugar, int nuevasVentas) { //complejidad: o(n log n)
    if (lugar > 0 && lugar <= productos.size()) {
        productos[lugar - 1].ventas = nuevasVentas;
    } else {
        std::cout << "Lugar no válido." << std::endl;
    }
}
//Crea un nuevo txt
void escribirProductos(const std::vector<Producto>& productos) {
    std::ofstream archivo("articulos_modificados.txt");
    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo para escritura." << std::endl;
        return;
    }
    for (std::vector<Producto>::const_iterator it = productos.begin(); it != productos.end(); ++it) {
        archivo << it->nombre << '-' << it->ventas << '\n';
    }
    archivo.close();
}
//funcion para agregar un nuevo producto
void agregar(std::vector<Producto>& productos, const std::string& nombre, int ventas) { //complejidad: O(1)
    Producto p;
    p.nombre = nombre;
    p.ventas = ventas;
    productos.push_back(p);
}
//elimina un producto de la lista
void eliminar(std::vector<Producto>& productos, int lugar) { //complejidad: O(n)
    if (lugar > 0 && lugar <= productos.size()) {
        productos.erase(productos.begin() + lugar - 1);
    } else {
        std::cout << "Lugar no válido." << std::endl;
    }
}

#endif




