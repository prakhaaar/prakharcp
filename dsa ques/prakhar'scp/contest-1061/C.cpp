#include <bits/stdc++.h>
using namespace std;

struct S {
    void run() {
        int a;
        scanf("%d", &a);
        vector<int> r;

        while (a--) {
            int b, c;
            scanf("%d %d", &b, &c);
            vector<int> d(b);
            int e = 0, i = 0;

            while (i < b) {
                scanf("%d", &d[i]);
                if (d[i] > e) e = d[i];
                i++;
            }

            vector<int> f(e + 1, 0);
            i = 0;
            while (i < b) {
                f[d[i]]++;
                i++;
            }

            vector<int> g(e + 1, 0);
            i = 1;
            while (i <= e) {
                g[i] = g[i - 1] + f[i];
                i++;
            }

            int h = 1;

            auto k = [&](int x) {
                int y = min(e, 4 * x - 1);
                int z = g[y];
                int p = 0;
                if (x <= e) p += f[x];
                if (2 * x <= e) p += f[2 * x];
                if (3 * x <= e) p += f[3 * x];
                return z - p;
            };

            i = e;
            while (i >= 1) {
                if (k(i) <= c) {
                    h = i;
                    break;
                }
                i--;
            }

            r.push_back(h);
        }

        int j = 0;
        while (j < (int)r.size()) {
            printf("%d\n", r[j]);
            j++;
        }
    }
};

int main() {
    S().run();
    return 0;
}
