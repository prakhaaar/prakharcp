#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int ans = 0;
        for (int i = 0; i < n; ++i) {
            int j = i;
            int maxi = LLONG_MIN;
            while (j < n && ((a[j] > 0 && a[i] > 0) || (a[j] < 0 && a[i] < 0))) {
                maxi = max(maxi, a[j]);
                ++j;
            }

            ans += maxi;
            i = j - 1;
        }

        cout << ans << endl;
    }
}
