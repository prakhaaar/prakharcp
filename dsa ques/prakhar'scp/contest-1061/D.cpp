#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> poss;
        for (int k = 1; k <= n; ++k) {
            poss.push_back(k);
        }
        vector<int> act;
        for (int i = 1; i < n; ++i) {
            act.push_back(i);
        }
        while (poss.size() > 1) {
            int best_j = -1;
            int min_diff = INT_MAX;
            int sp = poss.size();
            int half = sp / 2;
            for (int jj = 0; jj < 15; ++jj) {
                int cnt = 0;
                for (int k : poss) {
                    if ((k & (1 << jj)) != 0) ++cnt;
                }
                if (cnt == 0 || cnt == sp) continue;
                int diff = abs(cnt - half);
                if (diff < min_diff || (diff == min_diff && jj < best_j)) {
                    min_diff = diff;
                    best_j = jj;
                }
            }
            if (best_j == -1) {
                for (int jj = 0; jj < 15; ++jj) {
                    int cnt = 0;
                    for (int k : poss) {
                        if ((k & (1 << jj)) != 0) ++cnt;
                    }
                    if (cnt > 0 && cnt < sp) {
                        best_j = jj;
                        break;
                    }
                }
            }
            int m = 1 << best_j;
            int na = act.size();
            vector<int> resp(na);
            for (int q = 0; q < na; ++q) {
                int i = act[q];
                cout << "? " << i << " " << m << endl;
                cout.flush();
                int b;
                cin >> b;
                if (b == -1) return 0;
                resp[q] = b;
            }
            int cy = 0;
            for (int b : resp) if (b) ++cy;
            int sy = 0;
            for (int k : poss) if ((k & m) != 0) ++sy;
            vector<int> nposs;
            vector<int> nact;
            int dec;
            if (cy == sy) {
                dec = 0;
                for (int k : poss) {
                    if ((k & m) == 0) nposs.push_back(k);
                }
            } else {
                dec = 1;
                for (int k : poss) {
                    if ((k & m) != 0) nposs.push_back(k);
                }
            }
            for (int q = 0; q < na; ++q) {
                if (resp[q] == dec) {
                    nact.push_back(act[q]);
                }
            }
            poss = std::move(nposs);
            act = std::move(nact);
        }
        int ans = poss[0];
        cout << "! " << ans << endl;
        cout.flush();
    }
    return 0;
}
