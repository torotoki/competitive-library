## CGL_4_C.cpp

- [GitHub]({{ site.github.repository_url }}/blob/master/cpp/src/CGL_4_C.cpp)

### Includes

- [polygon.cpp](../include/geometry/polygon)
- [convex.cpp](../include/geometry/convex)

{% highlight cpp %}
#include "../include/geometry/polygon.cpp"
#include "../include/geometry/convex.cpp"

Point input() {
  ld x, y;
  scanf("%Lf%Lf", &x, &y);
  return Point(x, y);
}

int main() {
  int n, q;
  scanf("%d", &n);
  Polygon poly;
  for (int i = 0; i < n; ++i) {
    poly.push_back(input());
  }
  scanf("%d", &q);
  for (int i = 0; i < q; ++i) {
    Point p = input();
    Point q = input();
    bool is_zero = true, is_one = true;
    for (int j = 0; j < n; ++j) {
      int c = ccw(p, q, at(poly, j));
      if (c == 1) is_zero = false;
      if (c == -1) is_one = false;
    }
    Polygon g = convex_cut(poly, Line(p, q));
    ld res = is_zero ? 0.0L : (is_one ? area(poly) : area(g));
    printf("%.10Lf\n", res);
  }
}
{% endhighlight %}

- [Back](../..)
