## GRL_6_A.cpp

- [GitHub]({{ site.github.repository_url }}/blob/master/cpp/src/GRL_6_A.cpp)

### Includes

- [max_flow.cpp](../include/graph/max_flow)

{% highlight cpp %}
#include "../include/graph/max_flow.cpp"

int main() {
  int V, E, u, v, c;
  scanf("%d%d", &V, &E);
  Graph<int> g(V);
  while (E--) {
    scanf("%d%d%d", &u, &v, &c);
    add_edge(g, u, v, c);
  }
  printf("%d\n", max_flow(g, 0, V-1));
  return 0;
}
{% endhighlight %}

- [Back](../..)
