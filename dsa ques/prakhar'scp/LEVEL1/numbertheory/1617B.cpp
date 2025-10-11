#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() { 
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << 2 << " " << n - 3 << " " << 1 << '\n';
        } else if (n % 4 == 1) {
            cout << n/2 + 1 << " " << n/2 - 1 << " " << 1 << '\n';
        } else {
            cout << n/2 + 2 << " " << n/2 - 2 << " " << 1 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
