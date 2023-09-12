#include <iostream>
#include <vector>
#include <algorithm>
#include "administrador.h"

int main() {
    std::vector<Producto> productos;

    Producto p1 = {45, "Intel i7 13700KF"};
    productos.push_back(p1);

    Producto p2 = {745, "Intel i9 13900K"};
    productos.push_back(p2);

	Producto p3 = {84, "Gigabyte B550M AORUS Elite"};
    productos.push_back(p3);
    
    Producto p4 = {623, "MSI B550 gaming plus"};
    productos.push_back(p4);
    
    Producto p5 = {68, "NVIDIA Geforce RTX 4090"};
    productos.push_back(p5);
    
    Producto p6 = {457, "NVIDIA Geforce RTX 3090"};
    productos.push_back(p6);
    
    Producto p7 = {46, "Kingston Fury Beast DDR4 8GB"};
    productos.push_back(p7);
    
    Producto p8 = {35, "Kingston Fury Beast RGB DDR5 16GB"};
    productos.push_back(p8);
    
    Producto p9 = {786, "Disipador Cooler MAster Hyper 212 RGB"};
    productos.push_back(p9);
    
    Producto p10 = {44, "Disipador Gigabyte AORUS ATC800 RGB"};
    productos.push_back(p10);
    
    Producto p11 = {68, "Corsair H150 ARGB Enfriamiento liquido"};
    productos.push_back(p11);
    
    Producto p12 = {85, "Corsair H55 ARGB ENfriamiento liquido"};
    productos.push_back(p12);
    
    Producto p13 = {356, "ASUS Fuente de poder 750w ROG-STRIX-750G"};
    productos.push_back(p13);
    
    Producto p14 = {65, "Fuente de poder ASUS ROG Thor Titanium 80 plus 1600w"};
    productos.push_back(p14);
    
    Producto p15 = {45, "Disco duro western digital 3TB"};
    productos.push_back(p15);
    
    Producto p16 = {32, "Disco duro Seagate 1TB"};
    productos.push_back(p16);
    
    Producto p17 = {23, "Kingston SSD A400 480GB"};
    productos.push_back(p17);
    
    Producto p18 = {12, "western digital SSD 960GB"};
    productos.push_back(p18);
    
    Producto p19 = {44, "Intel i9 13900K"};
    productos.push_back(p19);
    
    Producto p20 = {57, "Intel i9 13900K"};
    productos.push_back(p20);
    
   
    ordenar(productos);
    imprimirConNumeros(productos); 
    
     int lugar;
    int nuevasVentas;
    std::cout << "Introduce el numero de lugar del producto que quieres modificar: ";
    std::cin >> lugar;
    std::cout << "Introduce el nuevo número de ventas: ";
    std::cin >> nuevasVentas;

    
    modificar(productos, lugar, nuevasVentas);

   
    ordenar(productos);

    
    imprimirConNumeros(productos);

    return 0;
}
