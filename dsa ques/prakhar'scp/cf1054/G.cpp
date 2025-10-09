#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pii pair <int, int>
#define all(x) x.begin(), x.end()
const int mod = 998244353, N = 300003, G = 3, C = 5e6 + 1;
 
vector <pii> add(vector <pii> a, vector <pii> b, int k) {
    for (int i = 0; i < k; ++i) if (b[i].first) {
        int p = -1;
        for (int j = 0; j < k; ++j) if (b[i].first == a[j].first) {
            p = j;
        }
        int q = -1;
        for (int j = 0; j < k; ++j) if (!a[j].first) {
            q = j;
        }
        if (p != -1) {
            a[p].second += b[i].second;
        } else if (q != -1) {
            a[q] = b[i];
        } else {
            int mn = b[i].second;
            for (int j = 0; j < k; ++j) {
                mn = min(mn, a[j].second);
            }
            for (int j = 0; j < k; ++j) {
                a[j].second -= mn;
            }
            b[i].second -= mn;
            for (int j = 0; j < k; ++j) if (!a[j].second) {
                if (b[i].second > 0) {
                    a[j] = b[i], b[i].second = 0;
                } else {
                    a[j].first = 0;
                }
            }
        }
    }
    return a;
}
 
struct Seg {
    vector <pii> val[N << 1];
    int n, k;
    void build(vector <int> &a, int _k) {
        n = a.size(), k = _k;
        for (int i = 0; i < n; ++i) {
            val[i + n].clear();
            val[i + n].resize(k);
            val[i + n][0] = {a[i], 1};
        }
        for (int i = n - 1; i; --i) {
            val[i] = add(val[i << 1], val[i << 1 | 1], k);
        }
    }
    vector <pii> query(int l, int r) {
        vector <pii> ans(k);
        for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
            if (l & 1) {
                ans = add(ans, val[l++], k);
            }
            if (r & 1) {
                ans = add(ans, val[--r], k);
            }
        }
        return ans;
    }
} root;
 
void solve() {
    int n, q;
    cin >> n >> q;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector <pii> pos;
    for (int i = 0; i < n; ++i) {
        pos.emplace_back(a[i], i);
    }
    sort(all(pos));
    auto query = [&](int c, int l, int r) {
        return lower_bound(all(pos), pii(c, r)) - lower_bound(all(pos), pii(c, l));
    };
    root.build(a, 2);
    while (q--) {
        int l, r;
        cin >> l >> r, --l;
        vector <pii> res = root.query(l, r);
        vector <int> vec;
        for (auto [x, y] : res) if (x) {
            if (query(x, l, r) > (r - l) / 3) {
                vec.pb(x);
            }
        }
        sort(all(vec));
        if (vec.empty()) vec.pb(-1);
        for (int i = 0; i < (int)vec.size(); ++i) cout << vec[i] << " \n"[i + 1 == (int)vec.size()];
    }
}
 
int main () {
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}