/*
--Problema Grafo Conexo--
 --Rubén Hernández Rivas A01024669--
  --Abril 2020--

  Código implementado desde: https://www.tutorialspoint.com/cplusplus-program-to-perform-edge-coloring-of-a-graph
  Referencia: https://www.geeksforgeeks.org/graph-coloring-set-2-greedy-algorithm/

  Problema: Dado un grafo conexo y un número m > 0, llamamos colorear el grafo a asignar un número i(1<=i<=m) a cada vértice, de forma que dos vértices adyacentes nunca tengan asignados números iguales. Deseamos implementar un algoritmo que coloree un grafo dado.
*/

#include<bits/stdc++.h>
using namespace std;
int ver, ar, i, j;
vector<vector<pair<int, int> > > g;
vector<int> color;
bool v[111001];
void col(int n) {
   queue<int> q;
   int c = 0;
   set<int> vertex_colored;
   if(v[n])
      return;
      v[n] = 1;
   for(i = 0;i<g[n].size();i++) {
      if(color[g[n][i].second]!=-1) {
         vertex_colored.insert(color[g[n][i].second]);
      }
   }
   for(i = 0;i<g[n].size();i++) {
      if(!v[g[n][i].first]) {
         q.push(g[n][i].first);
      }
      if(color[g[n][i].second]==-1) {
         while(vertex_colored.find(c)!=vertex_colored.end())
            c++;
            color[g[n][i].second] = c;
            vertex_colored.insert(c);
            c++;
      }
   }
   while(!q.empty()) {
      int temp = q.front();
      q.pop();
      col(temp);
   }
   return;
}
int main() {
   int u,w;
   set<int> empty;
   cout<<"Captura el numero de vertices y aristas respectivamente:";
   cin>>ver>>ar;
   cout<<"\n";
   g.resize(ver); //number of vertices
   color.resize(ar,-1); //number of edges
   memset(v,0,sizeof(v));
   for(i = 0;i<ar;i++) {
      cout<<"\nCaputra vertices de la arista: "<<i+1<<" :"<<"\n";
      cin>>u>>w;
      u--; w--;
      g[u].push_back(make_pair(w,i));
      g[w].push_back(make_pair(u,i));
   }
   col(0);
   for(i = 0;i<ar;i++) {
      cout<<"Arista "<<i+1<<" esta coloreada con color: "<<color[i]+1
      << "\n";
   }
}
