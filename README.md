# Tarea 3. Técnicas de diseño de algoritmos

---

##### Integrantes:
1. Rubén Hernández Rivas - A01024669 - CSF

---
## 1. Aspectos generales

Las orientaciones de la tarea se encuentran disponibles en la plataforma **Canvas**.

Este documento es una guía sobre qué información debe entregar como parte de la tarea, qué requerimientos técnicos debe cumplir y la estructura que debe seguir para organizar su entrega.


### 1.1 Requerimientos técnicos

A continuación se mencionan los requerimientos técnicos mínimos de la tarea, favor de tenerlos presente para que cumpla con todos.

* El código debe desarrollarse en C++, cumpliendo con el último estándar [C++17](https://isocpp.org/std/the-standard).
* Toda la programación debe realizarse utilizando Programación Genérica.
* Deben utilizarse las [C++ Core Guidelines](https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md).
* Todo el código debe estar correctamente documentado, siguiendo los lineamientos que aparecen en [Documenting C++ Code](https://developer.lsst.io/cpp/api-docs.html).
* Todo el código de la tarea debe alojarse en este repositorio de GitHub.
* Debe configurar su repositorio para que utilice el sistema de Integración Continua [Travis CI](https://travis-ci.org/).

### 1.2 Estructura del repositorio

El proyecto debe seguir la siguiente estructura de carpetas:
```
- / 			        # Raíz del repositorio
    - README.md			# Archivo con la información general de la actividad (este archivo)
    - sources  			# Códigos fuente con la solución
    - examples			# Archivos de ejemplo que pueden utilizarse para verificar que la solución funciona.
```

## 2. Solución

*[Incluya aquí una explicación de la solución implementada]*

Aqui se presentan dos códigos diferentes respecto a los problemas 4 y 7 del 3er Quizz. 

El problema 4 es sobre un algoritmo de encontrar un indice en un algoritmo ordenado en el menor tiempo posible. 

El problema 7 es sobre colorear un grafo conexo llamando a asignar un numero a cada vértice de este.

######Programa Divide y Venceras:######

Planteación del problema: Sea a[1..n] un vector ordenado de enteros todos distintos implementar un algoritmo con la menor complejidad posible en el peor caso capaz de encontrar un indice i tal que 1<=i<=n y a[i]=i, suponiendo que tal indice exista.

Dentro de este programa la solución brindada busca un indice dentro de un vector ordenado (previamente ya escrito en el código) de puros enteros diferentes, donde este indice tiene que ser mayor a la posición 1 y encontrarlo en el mayor tiempo posible. 

La complejidad dada de este algoritmo es: 

######Programa Coloreo de Grafo

Planteación del problema: Dado un grafo conexo y un número m > 0, llamamos colorear el grafo a asignar un número i(1<=i<=m) a cada vértice, de forma que dos vértices adyacentes nunca tengan asignados números iguales. Deseamos implementar un algoritmo que coloree un grafo dado.

Dentro de este programa primero que nada se busca crear vertices que nunca sean iguales entre su vertice adyacente, que siempre haya esa diferencia. Para facilitar el desarrollo se piden al usuario directamente forme cuantos vértices, aristas quiere en el grafo asi como los valores correspondientes de cada vértice que une esas aristas. 
Como resultado el programa despliega la lista de vertices y aristas creados junto con los colores implementados para colorear las aristas de este grafo y poder tener un grafo final coloreado dependiendo las caracteristicas de cada arista (utilizando la menor cantidad de colores posibe). 

La complejidad de este algoritmo es: 

### 2.1 Pasos a seguir para utilizar la aplicación

*[Incluya aquí una guía paso a paso para poder utilizar la aplicación, desde la clonación del repositorio, la compilación del código hasta la ejecución de los ejemplos para visualizar los resultados.]*

Debe considerar ya tener pre-instalados los siguientes softwares/controles para poder compilar y correr los programas respectivos: 
*Git
*gcc

Las instrucciones para poder compilar y correr los programas son las siguientes:

Clonar el repositorio de github desde la terminal/cmd:



## 3. Referencias

1. U, T. [C ] Busqueda Ternaria - Divide y Vencerás. Retrieved April 9, 2020, from http://www.bitacorasoftware.com/2017/03/c-busqueda-ternaria-divide-y-venceras.html

2. Iniesto, A & Hernandez, G. Aplicación Integral de Grafos: Coloración. Universidad Politécnica de Madrid. Facultad de Informática, de http://www.dma.fi.upm.es/personal/gregorio/grafos/web/iagraph/documents/TFC%20Coloracion.pdf

3. TutorialsPoint. Retrieved April 13, 2020, from https://www.tutorialspoint.com/cplusplus-program-to-perform-edge-coloring-of-a-graph

