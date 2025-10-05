#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int mn = INT_MAX;
        vector<int> bad;

        for (int i = 0; i < n; i++) {
            if (a[i] >= mn) bad.push_back(i + 1);
            mn = min(mn, a[i]);
        }

        cout << bad.size() << '\n';
        for (int i = 0; i < (int)bad.size(); i++) {
            cout << bad[i] << (i + 1 == (int)bad.size() ? '\n' : ' ');
        }
    }
    return 0;
}
