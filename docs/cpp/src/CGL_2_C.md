## CGL_2_C.cpp

- [GitHub]({{ site.github.repository_url }}/blob/master/cpp/src/CGL_2_C.cpp)

### Includes

- [intersect.cpp](../include/geometry/intersect)

{% highlight cpp %}
#include "../include/geometry/intersect.cpp"

Point input() {
  ld x, y;
  scanf("%Lf%Lf", &x, &y);
  return Point(x, y);
}

int main() {
  int q;
  scanf("%d", &q);
  while (q--) {
    Line l1(input(), input());
    Line l2(input(), input());
    Point res = is_ll(l1, l2);
    printf("%.10Lf %.10Lf\n", real(res), imag(res));
  }
  return 0;
}
{% endhighlight %}

- [Back](../..)
