#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n - 1; ++i) {
        for(int j = 0; j < n - i - 1; ++j) {
            if(s[j] > s[j + 1]) {
                swap(s[j], s[j + 1]);
            }
        }
    }
    cout << s << "\n";
}
int main() {
    solve();
    return 0;
}