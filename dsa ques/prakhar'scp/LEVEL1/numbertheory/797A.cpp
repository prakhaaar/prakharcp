#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>

void solve() {
    ll n;
    int k;
    cin >> n >> k;

    vi a;

    // Prime factorization
    for (ll i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            a.push_back(i);
            n /= i;
        }
    }
    if (n > 1) a.push_back(n);

    if (k > (int)a.size()) {
        cout << -1 << '\n';
        return;
    }

    for (int i = 0; i < k - 1; ++i) {
        cout << a[i] << " ";
    }

    ll p = 1;
    for (int i = k - 1; i < (int)a.size(); ++i) {
        p *= a[i];
    }

    cout << p << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
