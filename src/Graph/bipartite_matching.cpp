#pragma once

#include "../util.hpp"

class BipartiteMatching {
  int V;
  vector<vector<int>> g;
  vector<int> match;
  vector<bool> used;
  bool dfs(int v) {
    used[v] = true;
    for (int u: g[v]) {
      int w = match[u];
      if (w < 0 || (!used[w] && dfs(w))) {
        match[v] = u;
        match[u] = v;
        return true;
      }
    }
    return false;
  }
public:
  BipartiteMatching(int v) : V(v), g(v), match(v), used(v) {}
  void add_edge(int u, int v) {
    g[u].push_back(v);
    g[v].push_back(u);
  }
  int maximum_matching(void) {
    int res = 0;
    fill(begin(match), end(match), -1);
    for (int v = 0; v < V; ++v) {
      if (match[v] >= 0) continue;
      fill(begin(used), end(used), 0);
      if (dfs(v)) ++res;
    }
    return res;
  }
};

// Verified : AOJ GRL_7_A (Bipartite Matching)
/*
int main() {
  int X, Y, E, x, y;
  cin >> X >> Y >> E;
  BipartiteMatching mat(X + Y);
  while (E--) {
    cin >> x >> y;
    mat.add_edge(x, X + y);
  }
  cout << mat.maximum_matching() << endl;
  return 0;
}
*/