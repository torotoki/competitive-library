class Trie {
  const int num_chars = 26;
  int n = 0;
  vector<Trie> vt;
public:
  Trie (const string str) : vt(26) {
    insert(str);
  }

  Trie () {}

  void insert(const string &s) {
    if (vt.size() != num_chars) vt.resize(num_chars);

    n++;
    if (s != "") {
      int nxt = s[0]-'a';
      vt[nxt].insert(s.substr(1));
    }
  }

  int query(string s) {
    if (s == "") return n;

    Trie nxt = vt[s[0]-'a'];
    if (!nxt.empty()) {
      return nxt.query(s.substr(1));
    } else {
      return 0;
    }
  }

  bool empty() {
    return n==0;
  }
};
