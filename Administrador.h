#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <vector>
#include <algorithm>
#include <iostream>
#include <cctype>  

struct Producto {
    int ventas;
    std::string nombre;
};


bool compararProductos(const Producto& a, const Producto& b) {
    return a.ventas > b.ventas;
}


void ordenar(std::vector<Producto>& productos) {
    std::sort(productos.begin(), productos.end(), compararProductos);
}


void imprimirConNumeros(const std::vector<Producto>& productos) {
    for (int i = 0; i < productos.size(); ++i) {
        std::cout << i+1 << " ventas: " << productos[i].ventas << " Nombre: " << productos[i].nombre << std::endl;
    }
}




void modificar(std::vector<Producto>& productos, int lugar, int nuevasVentas) {
    if (lugar > 0 && lugar <= productos.size()) {
        productos[lugar - 1].ventas = nuevasVentas;
    } else {
        std::cout << "Lugar no válido." << std::endl;
    }
}


#endif 

