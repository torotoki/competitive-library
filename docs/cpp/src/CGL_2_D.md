## CGL_2_D.cpp

- [GitHub]({{ site.github.repository_url }}/blob/master/cpp/src/CGL_2_D.cpp)

### Includes

- [distance.cpp](../include/geometry/distance)

{% highlight cpp %}
#include "../include/geometry/distance.cpp"

Point input() {
  ld x, y;
  scanf("%Lf%Lf", &x, &y);
  return Point(x, y);
}

int main() {
  int q;
  scanf("%d", &q);
  while (q--) {
    Segment s1(input(), input());
    Segment s2(input(), input());
    printf("%.10Lf\n", dist_ss(s1, s2));
  }
  return 0;
}
{% endhighlight %}

- [Back](../..)
