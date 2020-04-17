/*
--Problema Vector Ordenado--
 --Rubén Hernández Rivas A01024669--
  --Abril 2020--

  Código implementado desde: http://www.bitacorasoftware.com/2017/03/c-busqueda-ternaria-divide-y-venceras.html

  Problema: Sea a[1..n] un vector ordenado de enteros todos distintos implementar un algoritmo con la menor complejidad posible en el peor caso capaz de encontrar un indice i tal que 1<=i<=n y a[i]=i, suponiendo que tal indice exista.
*/

#include <iostream>
using namespace std;

void imprimeVector(int x[],int n);
int bTernaria(int inicio,int final,int x[],int elemento);

int main()
{
  //Modificar valores de vector (ya ordenado)
 int vector[]= {1,2,3,4,5,6,7,8,9,10,11,12};
 int n= sizeof(vector) / sizeof(int);
 cout<<"Vector Ordenado: ";
 imprimeVector(vector,n);
 int elem;
 cout<<"Ingresa el valor a buscar: "<<endl;
 cin>>elem;
 cout<<"\nElemento a Buscar: "<<elem
 <<"\nSe encontro el elemento en la posicion: "<<bTernaria(0,n,vector,elem)<<endl;
 return 0;
}

int bTernaria(int inicio,int final,int x[],int elemento)
{
 if(inicio<=final)
 {
  int tamano = final - inicio;
  int tercio = inicio + (tamano / 3);
  int doster = inicio + (tamano * 2) / 3;
  if(x[tercio]==elemento) return tercio;
  else if(elemento < x[tercio])
  {
   bTernaria(inicio,tercio-1,x,elemento);
  }
  else
  {
   if(x[doster]==elemento) return doster;
   else if(elemento > x[doster])
   {
    bTernaria(doster+1,final,x,elemento);
   }
   else
   {
    bTernaria(tercio+1,doster-1,x,elemento);
   }
  }
 }
 else return -1;
}

void imprimeVector(int x[],int n)
{
 for(int i=0;i<n;i++){
  cout<<x[i]<<" ";
 }
 cout<<endl;
}
