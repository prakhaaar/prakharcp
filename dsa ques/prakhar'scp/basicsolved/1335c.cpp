#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

int main() {
    fast;
    ll t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        map<ll,ll> m;
        ll x, mx = 0;
        for (int i = 0; i < n; ++i) cin >> x, m[x]++;
        for (auto &p : m) mx = max(mx, p.second);
        ll diff = m.size();
        cout << (mx == diff ? mx - 1 : min(mx, diff)) << "\n";
    }
}
