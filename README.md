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

El codigo utiliza un algortimo de ordenamineto de la biblioteca ed estandar de c++: std::sort. Su complejidad es de O(n log n). n es el número de elementos que se estan ordenando

# Hace un análisis de complejidad correcto y completo todas las estructuras de datos y cada uno de sus usos en el programa

principal estructura de datos utilizada:

std::vector

Análisis de complejidad de las operaciones realizadas en la estructura:

Inserción (push_back): su complejidad es de O(1), en caso de que el vector necesite redimensionarse, la complejidad de tiempo seria de O(n) en el peor de los casos, esto se debe a que todos los elementos existentes tendrían que ser copiados a un nuevo bloque de memoria.

Acceso (operator[]): La complejidad es de O(1). Se puede acceder a cualquier elemento del vector en tiempo constante

Eliminación (erase): la complejidad es de O(n), esto se debe a que puede requerir desplazar todos los elementos despues del elemento eliminado.

# Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.

Lectura y creacion de archivos: Se recorre cada linea del archivo 1 vez. o(n)

Ordenar productos por ventas (sort): std::sort utiliza un algoritmo de ordenación rápida. o(n log n)

imprimir lista: se recorren los productos 1 vez. o(n)

Modificar numero de ventas: se accede a un elemento especifico y se modifica. o(1)

Adición de un nuevo producto (modificar): su complejidad es de O(1), debido a que accede y modifica un elemento en una posición especifica

Eliminación de un prodcuto (eliminar): la complejidad es de O(n), debido a que se requiere desplazar los elementos restantes del elemento eliminado

ordenar productos despues de la modificación (sort): utiliza std::sort. o(n log n)

Imprimir lista despues de la modificación: o(n)

Escribir productos en un nuevo txt: se recorren todos los productos 1 vez. o(n)

omplejidad dominante: O (n log n) Esto se debe al algoritmo de ordenamiento utilizado y tambien al tamaño de lo que se está ordenando por lo que es una buena complejidad.

# SICT0302 Toma decisiones 

# Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.

El codigo utiliza "std::sort" de la biblioteca de c++. Este se basa en el algoritmo de ordenamiento de ontrospección que es una variante del QuickSort, con una fase de ordenamiento por insercón (insertion sort) y una fase de ordenamiento por montículos (heapsort) para un mejor rendimiento. Se utiliza dentro de la función "compararProductos"

Vista en el codigo: 

std::sort(productos.begin(), productos.end(), compararProductos);

# Selecciona una estructura de datos adecuada al problema y lo usa correctamente.

Se utiliza la estrucutra de datos "std::vector", es una matriz dinámica proporcionada por la biblioteca estandar de c++. El codigo lo usa en la estructura Producto para almacenar la lista de productos.

Vista en el codigo: 

void ordenar(std::vector<Producto>& productos) {

# SICT0303 Implementa acciones científicas

# Implementa mecanismos para consultar información de las estructras correctos

Acceso directo a elementos: Se puede acceder a cualquier elemento del vector utilizando corchetes [] "productos [i]" esto dará el producto en la posición i.

Iteración: recorre todos los elementos del vector utilizando un bucle "for". "for (auto& producto : productos)" recorre todos los productos en el vector.

Tamaño del vector: se tiene el numero de elementos en el vector utilizando la función "size()". vista en el codigo: "productos.size()". Esto dará el numero de productos en el vector.

Verificación de vacio: verifica si el vector está vacío con la función: "empty()". Vista en el codigo: "productos.empty()". Aqui devolvera "true" si el vector esta vacío y en caso de no estar vacío se devolvera "false".

# Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta

Apertura de achivo: se utiliza "std::ifstream" para abrir el archivo de texto en modo lectura.

lectura de lineas: el codigo usa "std::getline" para leer cada linea del archivo.

Conversión de datos: se utiliza ">>" para convertir la parte de ventas de cada linea en entero

ignorar caractres: se utiliza "std::ifstream::ignore" para ignorar el resto de la linea después de leer las ventas

cierre del archivo: se utiliza "std::ifstream::close" para cerrar el archivo después de leer los datos

# Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta

Apertura del archivo: se utiliza "std::ofstream" para abrir el nuevo archivo de texto qu se va a generar

Estructura de lineas: se tuliza el operador "<<" para escribir cada producto en el archivo

cierre del archivo: se utiliza "std::ofstream:close" para cerrar el archivo despues de haber escrito los datos
