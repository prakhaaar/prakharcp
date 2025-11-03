#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

struct QuerySolver {
    void run() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int tests;
        cin >> tests;
        while (tests--) {
            int n, q;
            cin >> n >> q;

            string s;
            cin >> s;
            vector<int64> queries(q);
            for (auto &x : queries) cin >> x;

            // Preprocess consecutive A segments in O(n)
            vector<int> nextB(n, -1);
            int lastB = -1;
            for (int i = n - 1; i >= 0; --i) {
                if (s[i] == 'B') lastB = i;
                nextB[i] = lastB;
            }

            // Handle wrap-around: store total leading and trailing 'A' runs
            int prefixA = 0, suffixA = 0;
            while (prefixA < n && s[prefixA] == 'A') ++prefixA;
            for (int i = n - 1; i >= 0 && s[i] == 'A'; --i) ++suffixA;

            bool hasB = (prefixA != n); // If all A's, no 'B' exists

            for (auto energy : queries) {
                if (!hasB) {
                    cout << energy << '\n';
                    continue;
                }

                int64 timeUsed = 0;
                int pos = 0;

                while (energy > 0) {
                    if (s[pos] == 'A') {
                        int jumpLen;
                        if (nextB[pos] == -1)
                            jumpLen = n - pos + prefixA;                         else
                            jumpLen = nextB[pos] - pos;

                        if (energy > jumpLen) {
                            energy -= jumpLen;
                            timeUsed += jumpLen;
                            pos = (pos + jumpLen) % n;
                        } else {
                            timeUsed += energy;
                            energy = 0;
                            break;
                        }
                    }

                    // Encountered a 'B'
                    if (s[pos] == 'B') {
                        energy /= 2;
                        ++timeUsed;
                        pos = (pos + 1) % n;
                    }
                }

                cout << timeUsed << '\n';
            }
        }
    }
};

int main() {
    QuerySolver().run();
    return 0;
}

