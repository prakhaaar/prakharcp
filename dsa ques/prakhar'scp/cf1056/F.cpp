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
    int n, k, s, q;
    cin >> n >> k >> s >> q;
    vector<vector<int>> g(n);
    for (int i = 0; i < n - 1; i++) {
      int x, y;
      cin >> x >> y;
      --x; --y;
      g[x].push_back(y);
      g[y].push_back(x);
    }
    vector<vector<pair<int, int>>> f(n);
    for (int i = 0; i < s; i++) {
      int v, x;
      cin >> v >> x;
      --v; --x;
      f[v].emplace_back(x, v);
    }
    vector<vector<pair<int, int>>> qs(n);
    for (int i = 0; i < q; i++) {
      int u, v;
      cin >> u >> v;
      --u; --v;
      if (f[u].size() > f[v].size()) {
        swap(u, v);
      }
      qs[v].emplace_back(u, i);
    }
 
    vector<int> mark(k, -1);
    vector<int> tin(n), tout(n);
    int T = 0;
    auto Dfs = [&](auto&& self, int v, int pr) -> void {
      tin[v] = ++T;
      for (auto& [col, ver] : f[v]) {
        mark[col] = ver;
      }
      for (int u : g[v]) {
        if (u == pr) {
          continue;
        }
        for (auto& [col, ver] : f[u]) {
          if (mark[col] != -1) {
            ver = mark[col];
          }
        }
      }
      for (auto& [col, ver] : f[v]) {
        mark[col] = -1;
      }
      for (int u : g[v]) {
        if (u == pr) {
          continue;
        }
        self(self, u, v);
      }
      tout[v] = ++T;
    };
    Dfs(Dfs, 0, -1);
 
    auto IsAncestor = [&](int x, int y) {
      return tin[x] <= tin[y] && tout[y] <= tout[x];
    };
 
    vector<pair<int, int>> memo(n, {-1, -1});
    vector<int> res(q);
    for (int v = 0; v < n; v++) {
      for (auto& [col, ver] : f[v]) {
        mark[col] = ver;
      }
      for (auto& [u, qid] : qs[v]) {
        if (memo[u].first == v) {
          res[qid] = memo[u].second;
          continue;
        }
        for (auto& [col, ver] : f[u]) {
          if (mark[col] != -1) {
            if (IsAncestor(ver, v) && IsAncestor(mark[col], u)) {
              res[qid] += 1;
            }
          }
        }
        memo[u] = {v, res[qid]};
      }
      for (auto& [col, ver] : f[v]) {
        mark[col] = -1;
      }
    }
 
    for (int i = 0; i < q; i++) {
      cout << res[i] << " \n"[i == q - 1];
    }
  }
  return 0;
}