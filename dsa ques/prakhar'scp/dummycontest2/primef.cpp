#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long n;
    cin >> n;
    map<long long, int> a;
    for (long long i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            a[i]++;
            n /= i;
        }
    }
    if (n > 1) a[n]++;  
    for (auto &x : a) {
        cout << x.first << " " << x.second << "\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
