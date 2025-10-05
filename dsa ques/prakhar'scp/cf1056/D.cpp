include <bits/stdc++.h>
 
using namespace std;
 
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    bool won = false;
    auto Ask = [&](int x, int y) {
      if (!won) {
        cout << x + 1 << " " << y + 1 << endl;
        int got;
        cin >> got;
        if (got == 1) {
          won = true;
        }
      }
    };
    for (int len = 1; len < n; len++) {
      for (int i = 0; i < n - len; i++) {
        Ask(i, i + len);
      }
    }
  }
  return 0;
}