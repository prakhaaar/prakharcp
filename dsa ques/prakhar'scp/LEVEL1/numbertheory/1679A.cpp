#include <bits/stdc++.h>
using namespace std;
void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
         if (n < 4 || n % 2 != 0) {
            cout << -1 << "\n";
            continue;
        }
        long long max_buses = n / 4;
        long long min_buses = (n + 5) / 6;
        cout << min_buses << " " << max_buses << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}