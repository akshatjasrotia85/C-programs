#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 50

// Define graph structure
typedef struct graph {
  int num_vertices;
  int adj_matrix[MAX_VERTICES][MAX_VERTICES];
} Graph;

// Initialize graph with n vertices
void init_graph(Graph *g, int n) {
  g->num_vertices = n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      g->adj_matrix[i][j] = 0;
    }
  }
}

// Add edge between vertices v1 and v2
void add_edge(Graph *g, int v1, int v2) {
  g->adj_matrix[v1][v2] = 1;
  g->adj_matrix[v2][v1] = 1;
}

// Remove edge between vertices v1 and v2
void remove_edge(Graph *g, int v1, int v2) {
  g->adj_matrix[v1][v2] = 0;
  g->adj_matrix[v2][v1] = 0;
}

// Check if edge exists between vertices v1 and v2
int has_edge(Graph *g, int v1, int v2) { return g->adj_matrix[v1][v2]; }

// Print adjacency matrix of graph
void print_graph(Graph *g) {
  for (int i = 0; i < g->num_vertices; i++) {
    for (int j = 0; j < g->num_vertices; j++) {
      printf("%d ", g->adj_matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  Graph g;
  init_graph(&g, 5);
  add_edge(&g, 0, 1);
  add_edge(&g, 1, 2);
  add_edge(&g, 2, 3);
  add_edge(&g, 3, 4);
  remove_edge(&g, 1, 2);
  printf("Graph:\n");
  print_graph(&g);
  printf("Edge between 0 and 1? %d\n", has_edge(&g, 0, 1));
  printf("Edge between 1 and 2? %d\n", has_edge(&g, 1, 2));
  return 0;
}
