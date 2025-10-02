/**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    long long ans = min({k, (n + m + k) / 3, n + m});
    cout << ans << "\n";
    return 0;
}
/*https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F

  basic math problem//
*/