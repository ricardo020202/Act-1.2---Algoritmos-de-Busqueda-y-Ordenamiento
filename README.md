![Tec de Monterrey](images/logotecmty.png)
# Act 1.2 - Algoritmos de Búsqueda y Ordenamiento

## <span style="color: rgb(26, 99, 169);">¿Qué tengo que hacer?</span>
En este repositorio de trabajo encontrarás los archivos "search.h", "bubble.h", "selection.h", "insertion.h" y "main.cpp", los cuales deberás modificar para el desarrollo de esta actividad. En el archivo "main.cpp", deberás colocar en la parte superior, en comentarios, tus datos. Por ejemplo:
```
// =========================================================
// File: main.cpp
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
```

Implementa, <span style="text-decoration: underline;">forma individual</span>, una aplicación que lea *n* datos, los ordene e indique la cantidad de comparaciones que realizar de cada uno de los tres algoritmos básicos de ordenamiento (burbuja, selection, inserción), posteriormente deberá leer *q* valores, mostrando la posición donde se encuentra el valor en el arreglo ordenado (-1 en caso de que no se encuentre) y la cantidad de comparaciones que hizo tanto por la búsqueda secuencial como por la búsqueda binaria.

## <span style="color: rgb(26, 99, 169);">**Entrada**</span>
La primera línea contiene un número entero positivo *n* (300 <= *n* <= 500) que indica el número de elementos a leer. A continuación, *n* números enteros enteros. Después vendrá una línea con un valor, *q*, indicando el cantidad de números a buscar y en la siguiente línea los *q* a buscar.

## <span style="color: rgb(26, 99, 169);">**Salida**</span>
La primera línea se desplegará el número de comparaciones que cada algoritmo básico de ordenamiento realizó (burbuja, selección, inserción), separados por espacios.

Después, se imprimirán *q* línea (uno por cada valor a buscar) mostrando la posición, cantidad de comparaciones de la búsqueda secuencial y la cantidad de comparaciones de la búsqueda binaria, separadas por espacios.

## <span style="color: rgb(26, 99, 169);">**Ejemplo de entrada**</span>
```
8
10 4 8 12 20 15 54 18
4
20 54 100 12
```

## <span style="color: rgb(26, 99, 169);">**Ejemplo de salida**</span>
```
5 5 5

6 7 3
7 8 4
-1 8 4
3 4 1
```

Para probar tu implementación, compila tu programa con el comando:
```
g++ -std=c++11 main.cpp -o app
```
Posteriormente, prueba con cada uno de los archivos de entrada de prueba que encontrarás en este repositorio (input1.txt, input2.txt, input3.txt, input4.txt). Los resultados que debes obtener se encuentran en los archivos llamados solution1.txt, solution2.txt, solution3.txt y solution4.txt. Para realizar las pruebas, puedes usar las siguientes líneas de código. Por ejemplo, si queremos probar con el archivo de prueba "input1.txt".
```
./app < input1.txt > mysolution1.txt
diff mysolution1.txt solution1.txt
```
Si el segundo comando no tiene ninguna salida, los resultados que obtuviste son los esperados.

## <span style="color: rgb(26, 99, 169);">**¿Bajo qué criterios se evalúa mi evidencia?**</span>

- **90%** - Para cada una de las funcionalidades se evaluará:

    - **Excelente (90%)** - pasa correctamente todos los casos de prueba.
    - **Muy Bien (70%)** - pasa correctamente el 75% de los casos de prueba.
    - **Bien (45%)** - pasa correctamente el 50% de los casos de prueba.
    - **Insuficiente (22%)** - pasa correctamente menos del 50% de los casos de prueba.


- **10%** - El código deberá seguir los lineamientos estipulados en el estándar de codificación: <span class="instructure_file_holder link_holder">[liga_estándar_codificación](estandar.pdf)</span>

## <span style="color: rgb(26, 99, 169);">**¿Dónde la entrego?**</span>
Cuando hayas pasado todas las pruebas, recuerda publicar el código en tu repositorio (*git push*).
