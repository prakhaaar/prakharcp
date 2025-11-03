#include <bits/stdc++.h>
using namespace std;

void rotateTriple(vector<int>& arr, int a, int b, int c) {
    int tmp = arr[c];
    arr[c] = arr[b];
    arr[b] = arr[a];
    arr[a] = tmp;
}

void solveCase() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) cin >> p[i];
    bool changed = true;
    while (changed) {
        changed = false;

        for (int val = 1; val + 2 <= n; ++val) {            int i1 = find(p.begin(), p.end(), val) - p.begin();
            int i2 = find(p.begin(), p.end(), val + 1) - p.begin();
            int i3 = find(p.begin(), p.end(), val + 2) - p.begin();

            if (i3 < i1 && i3 < i2) {
                rotateTriple(p, i3, i2, i1);
                changed = true;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << p[i];
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solveCase();
}

