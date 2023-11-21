# registro-ventas-PC

El programa consta de un registro en el que se verán distintos productos ordenados desde el mas venido hasta el menos venido.

# Acciones-del-usuario

El usuario podrá ver las ventas de los prodcutos, sera un reporte de ventas diarias por lo que el usuario podrá modificar el número de ventas del producto que desee. Cuando se realize esta acción el programa desplegará la lista actualizada con los nuevos datos de ventas y tambien creará un nuevo txt con estas modificaciones.

# Sort

El codigo utiliza "std::sort" de la biblioteca de c++. Este se basa en el algoritmo de ordenamiento de ontrospección que es una variante del QuickSort, con una fase de ordenamiento por insercón (insertion sort) y una fase de ordenamiento por montículos (heapsort) para un mejor rendimiento. Se utiliza dentro de la función "compararProductos"

Vista en el codigo: 

std::sort(productos.begin(),

productos.end(),

compararProductos);

# Caso de prueba

El caso de prueba es el archivo txt llamado: "articulos_gaming". Este contiene la lista de 100 articulos con su numero de ventas.

# Análisis de complejidad

Lectura y creacion de archivos: Se recorre cada linea del archivo 1 vez. o(n)

Ordenar productos por ventas (sort): std::sort utiliza un algoritmo de ordenación rápida. o(n log n)

imprimir lista: se recorren los productos 1 vez. o(n)

Modificar numero de ventas: se accede a un elemento especifico y se modifica. o(1)

ordenar productos despues de la modificación (sort): utiliza std::sort. o(n log n)

Imprimir lista despues de la modificación: o(n)

Escribir productos en un nuevo txt: se recorren todos los productos 1 vez. o(n)

omplejidad dominante: O (n log n) Esto se debe al algoritmo de ordenamiento utilizado y tambien al tamaño de lo que se está ordenando por lo que es una buena complejidad.
