# registro de ventas Cool-Gaming

El programa consta de un registro en el que se verán distintos productos (los productos están en el archivo de texto "articulos_gaming.txt") ordenados desde el mas venido hasta el menos venido. El usuario podrá hacer modificaciones a su gusto como cambiar las ventas, agregar productos o eliminar productos. Una vez que el usuario haya terminado de modificar la lista esta se guardará y creará un nuevo txt con las modificaciones realizadas. El objetivo de este programa es llevar un registro de ventas para poder determinar cual es el producto que mas se vende y el que menos se vende, de esta forma la tienda podrá tomar acciones para no hacer gastos inecesarios en productos que no se venden y tambien podrán saber cual es el que conviene pedir mas para su venta. Ejemplo de uso:

1. El programa desplegará un menu en el que habran 5 opciones:
   
  a. ver lista de productos: despliega la lista de todos los productos ordenados de mayor numero de ventas al menor
  
  b. modificar ventas: se le pedira al usuario escribir el numero de posición en la que se encuentra el producto que se desea modificar, posteriormente el programa solicitará el nuevo numero de ventas. Una vez concluido este proceso la lista se actualizará y se reordenará de acuerdo a los cambios realizados.
  
  c. agregar producto: se le pedirá al usuario escrbir el nombre de un nuevo producto que se desea agregar (EL NOMBRE DEL PRODUCTO DEBE DE IR SIN ESPACION Y SIN CARACTERES ESPECIALES, DE LO CONTRARIO EL PROGRAMA TRONARIA), depues de haber agregado el nombre del producto se pedirá el número de ventas de ese producto. Una vez hecho esto la lista se actualizará agregando el nuevo producto y ordenandolo de acuerdo a su numero de ventas.
  
  d. eliminar producto: el programa pedirá al usuario ingresar el numero de posición en el que se encuentra el producto deseado, posteriormente la lista se actualizará y se reordenará con base a la eliminación del producto.
  
  e. salir: guarda los cambios realizados y termina el programa.

2. Una vez que se termine el programa este creará un nuevo archivo de texto (articulos_modificados.txt) con todas la modificaciones realizadas.

# SICT0301: Evalúa los componentes

# Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.



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
