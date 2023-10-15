# registro-ventas-PC

El programa consta de un registro en el que se verán distintos productos ordenados desde el mas venido hasta el menos venido.

# Acciones-del-usuario

El usuario podrá ver las ventas de los prodcutos, sera un reporte de ventas diarias por lo que el usuario podrá modificar el número de ventas del producto que desse. Cuando se realize esta acción el programa desplegará la lista actualizada con los nuevos datos de ventas

# Sort

El codigo utiliza "std::sort" de la biblioteca de c++. Este se basa en el algoritmo de ordenamiento de ontrospección que es una variante del QuickSort, con una fase de ordenamiento por insercón (insertion sort) y una fase de ordenamiento por montículos (heapsort) para un mejor rendimiento. Se utuliza dentro de la función "compararProductos"

Vista en el codigo: 

std::sort(productos.begin(),

productos.end(),

compararProductos);

# Caso de prueba

El caso de prueba es el archivo txt llamado: "articulos_gaming". Este contiene la lista de 100 articulos con su numero de ventas.
