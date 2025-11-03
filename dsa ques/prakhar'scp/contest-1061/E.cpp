#include <bits/stdc++.h>
using namespace std;

class GraphSolver {
private:
    static const int INF = 1000000005;
    int n;
    vector<int> a;
    vector<vector<int>> adj;

    inline int fdiv(int num, int denom) {
        return num / denom - ((num ^ denom) < 0 && num % denom);
    }

    inline int cdiv(int num, int denom) {
        return fdiv(num + denom - 1, denom);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool check(int x) {
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
        }

        set<pair<int, int>> st;
        for (int i = 1; i <= n; i++) {
            for (auto [prv, prv_id] : st) {
                if (a[i] - prv >= x) {
                    addEdge(prv_id, i);
                }
            }
            st.insert({a[i], i});
            if ((int)st.size() > 3) {
                st.erase(prev(st.end()));
            }
        }

        int bad_cnt = 0;
        for (int i = 1; i <= n; i++) {
            if ((int)adj[i].size() >= 2) bad_cnt++;
        }

        for (int i = 1; i <= n; i++) {
            int delta = (int)adj[i].size() >= 2;
            for (int v : adj[i]) {
                if (adj[v].size() == 2) delta++;
            }
            if (delta == bad_cnt) return false;
        }

        return true;
    }

public:
    void solveTestCase() {
        cin >> n;
        a.assign(n + 1, 0);
        adj.assign(n + 1, {});

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int lo = -INF, hi = INF;
        while (lo < hi) {
            int mid = cdiv(lo + hi, 2);
            if (check(mid)) lo = mid;
            else hi = mid - 1;
        }

        cout << lo << '\n';
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    GraphSolver solver;

    while (t--) {
        solver.solveTestCase();
    }

    return 0;
}
