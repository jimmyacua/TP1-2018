Etapa 2. Fecha de entrega: domingo 13 de mayo, hora límite 11:30 p.m.
1. Implementar el modelo Lista Posicionada utilizando las estructuras de datos: Arreglo, Lista
Simplemente Enlazada y Lista Doblemente Enlazada.
2. Implementar el modelo Lista Indexada utilizando las estructuras de datos: Arreglo y Lista
Simplemente Enlazada.
3. Implementar el modelo Lista Ordenada utilizando las estructuras de datos: Arreglo y Lista
Simplemente Enlazada.
4. Implementar el modelo Pila utilizando la estructura de datos: Lista Simplemente Enlazada
4. Hacer un programa de prueba que permita verificar que todas las implementaciones de los 4
modelos están correctas. El programa de prueba debe mostrar un menú que permita al usuario
utilizar los diferentes operadores básicos de cada modelo. Obviamente deben incluirse algunos
algoritmos sencillos que permitan generar una interfaz adecuada para que dicha prueba se pueda
realizar.
Etapa 3. Fecha de entrega: domingo 27 de mayo, hora límite 11:30 p.m.
1. Especificar los siguientes algoritmos del modelo Lista Posicionada:
• Listar
• Simétrica (averigua si la lista es simétrica)
• Invertir (le da vuelta a la lista)
• Buscar (devuelve verdadero si un elemento está en la lista)
• Eliminar elementos repetidos
• Sublista (averigua si L1 está contenida en L2, por ejemplo L1 = 1, 3, 7, está contenida en L2 =
10, 1, 9, 1, 3, 7, 1, 2 pero no está contenida en L2 = 2, 1, 7, 3, 8 y tampoco está contenida en
L2 = 8, 1, 3, 3, 7)
• Iguales (averigua si L1 es igual a L2)
• Burbuja Original
• Burbuja Bi-direccional
• Selección Iterativa
• Selección Recursiva usando la recursividad que provee el compilador
• Selección Recursiva sin usar la recursividad que provee el compilador (se debe usar el
modelo Pila definido, especificado e implementado en los puntos anteriores)
• Inserción
• QuickSort (versión de Aho)
• QuickSort tal que si la sublista tiene menos de 50 elementos (puede variar) se usa Inserción.
• MergeSort.
• Unión (le agrega a L1 los elementos que están en L2, de manera que en L1 no queden
elementos repetidos). Requiere que L1 y L2 sean listas ordenadas y sin elementos repetidos.
• Unión ( le agrega a L1 los elementos que están en L2, de manera que en L1 no queden
elementos repetidos). Supone que L1 y L2 son listas NO necesariamente ordenadas.
Requiere que L1 y L2 no tengan elementos repetidos.
• Intersección (deja en L3 el resultado de la intersección de L1 y L2). Requiere que L1 y L2 sean
listas ordenadas y sin elementos repetidos.
• Intersección (deja en L3 el resultado de la intersección de L1 y L2). Supone que L1 y L2 son
listas NO necesariamente ordenadas. Requiere que L1 y L2 no tengan elementos repetidos.
• Eliminar de L1 los elementos que están en L2. Requiere que L1 y L2 sean listas ordenadas y
sin elementos repetidos.
• Eliminar de L1 los elementos que están en L2. Supone que L1 y L2 son listas NO
necesariamente ordenadas. Requiere que L1 y L2 no tengan elementos repetidos.
Para cada algoritmo debe incluir: nombre, parámetros con sus tipos y las cláusulas Efecto, Requiere y
Modifica.
2. Usar los operadores básicos del modelo Lista Posicionada para implementar los algoritmos del
punto anterior.
3. Especificar todos los algoritmos del modelo Lista Posicionada para el modelo Lista Indexada. Para
cada algoritmo debe incluir: nombre, parámetros con sus tipos y las cláusulas Efecto, Requiere y
Modifica.
4. Usar los operadores básicos del modelo Lista Indexada para implementar los algoritmos del punto
anterior.
5. Especificar los siguientes algoritmos del modelo Lista Ordenada:
 Iguales (averigua si L1 es igual a L2)
 Copiar (hace L2 = L1)
 Contenida (averigua si todos los elementos de L1 están en L2)
 Pertenece (averigua si un elemento está en L)
 Eliminar de L1 los elementos que están en L2
 Unión Versión 1 (le agrega a L1 los elementos que están en L2)
 Unión Versión 2 (deja en L3 el resultado de la unión de L1 y L2)
 Intersección Versión 1 (*)
 Intersección Versión 2 (*)
(*) Aclaración: La intersección crea la lista L3, de manera que L3 tendrá los elementos que están
tanto en L1 como en L2. En la Versión 1 se hará uso de un algoritmo auxiliar de búsqueda
(Pertenece), mientras que en la Versión 2 no se podrá realizar ningún tipo de búsqueda y por lo tanto
el algoritmo se moverá simultáneamente en ambas listas.
Para cada algoritmo debe incluir: nombre, parámetros con sus tipos y las cláusulas Efecto, Requiere y
Modifica.
6. Usar los operadores básicos del modelo Lista Ordenada para implementar los algoritmos del punto
anterior.
IMPORTANTE: Todos los algoritmos deben ser EFICIENTES y CLAROS. Se debe usar nombres
significativos e indentación. Además se puede recurrir a comentarios cuando se considere necesario.
7. Hacer un programa para probar todos los algoritmos implementados.
Etapa 4. Fecha de entrega: domingo 3 de junio, hora límite 11:30 p.m.
1. Hacer un análisis de la complejidad computacional de las estructuras de datos utilizadas para
implementar cada modelo así como de los diferentes algoritmos implementados. Para ello deberá
hacer cálculos de tiempo real de ejecución de los operadores básicos y los algoritmos, para diferentes
tamaños de n y mostrar dichos cálculos en tablas y gráficos. Tome en cuenta que para este tipo de
análisis tendrá sentido hacer cálculos de tiempo promedio de ejecución. Debido a que deberá trabajar
con n’s suficientemente grandes, deberá hacer la creación de las listas de manera automática y en el
caso del cálculo de los tiempos promedio deberá generar automáticamente los llamados a los
operadores y algoritmos.
2. Incluir una sección de conclusiones acerca de la eficiencia de las estructuras de datos y de los
algoritmos.
Importante: En esta etapa no se requiere que se haga un análisis de todas las implementaciones. Lo
que se requiere es que se haga un análisis completo y exhaustivo de las estructuras de datos,
operadores básicos y algoritmos más representativos e interesantes, de manera que cada grupo
deberá tomar la decisión de lo que se desea analizar. Además, se debe tomar en cuenta que los
alcances de este análisis estarán limitados por el tipo de hardware y software utilizados.