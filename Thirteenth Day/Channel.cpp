#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n, a, q;
    cin >> n >> a >> q;
    string s;
    cin >> s;
    int can = a;
    for (char c : s) {
      if (c == '+') {
        can += 1;
      }
    }
    bool all = false;
    int now = a;
    if (now == n) all = true;
    for (char c : s) {
      if (c == '+') {
        now += 1;
      } else {
        now -= 1;
      }
      if (now == n) {
        all = true;
      }
    }
    if (all) {
      cout << "YES" << '\n';
      continue;
    }
    if (can >= n) {
      cout << "MAYBE" << '\n';
      continue;
    }
    cout << "NO" << '\n';
  }
  return 0;
}
