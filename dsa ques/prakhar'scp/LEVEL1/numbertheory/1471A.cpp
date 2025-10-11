#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() { 
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        ll x;
        cin >> n >> x;
        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        ll mini= (sum + x - 1) / x;
        ll maxi= 0;
        for (auto it : a) {
            maxi+= (it + x - 1) / x;
        }

        cout << mini << " " << maxi<< '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
