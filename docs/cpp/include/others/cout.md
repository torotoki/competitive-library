## cout.cpp

- [GitHub]({{ site.github.repository_url }}/blob/master/cpp/include/others/cout.cpp)

{% highlight cpp %}
template <class T>
ostream &operator<<(ostream &os, const vector<T> &v) {
  for (auto it = v.begin(); it != v.end(); ++it) {
    if (it != v.begin()) os << " ";
    os << *it;
  }
  return os;
}
{% endhighlight %}

- [Back](../../..)
