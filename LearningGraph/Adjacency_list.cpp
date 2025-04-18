// Adjascency List representation in C++

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int s, int d) {
  adj[s].push_back(d);
  adj[d].push_back(s);
}

void printGraph(vector<int> adj[], int V) {
  for (int d = 0; d < V; ++d) {
    cout << "\n Vertex "
       << char(d+65) << ":" << " [";
    for (auto x : adj[d])
      cout << " " << char(x+65) << ",";
    cout << " ]";
    printf("\n");
  }
}

int main() {
  int V = 4;

  // Create a graph
  vector<int> adj[V];

  // Add edges
  addEdge(adj, 0, 1);
  addEdge(adj, 0, 2);
  addEdge(adj, 1, 2);
  addEdge(adj, 1, 3);
  printGraph(adj, V);
}