#include <bits/stdc++.h>
 
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
    int n, k;
    cin >> n >> k;
    k = n * n - k;
    if (k == 1) {
      cout << "NO" << '\n';
      continue;
    }
    cout << "YES" << '\n';
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (k > 0) {
          k -= 1;
          if (i == 0 && j == 0) cout << 'R'; else
          if (i == 0) cout << 'L';
          else cout << 'U';
        } else {
          cout << 'D';
        }
      }
      cout << '\n';
    }
  }
  return 0;
}
