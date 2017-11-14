#include "../include/graph/dijkstra.cpp"

int main() {
  int V, E, r, s, t, d;
  scanf("%d%d%d", &V ,&E, &r);
  Graph g(V);
  while (E--) {
    scanf("%d%d%d", &s ,&t, &d);
    add_edge(g, s, t, d);
  }
  auto res = dijkstra(g, r);
  for (int i = 0; i < V; ++i) {
    if (res[i] == inf<int>) puts("INF");
    else printf("%d\n", res[i]);
  }
  return 0;
}
