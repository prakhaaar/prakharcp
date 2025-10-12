#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

int64 productOfDigits(const string &t) {
    int64 prod = 1;
    bool anyDigit = false;
    for (char c : t) {
        if (c == '0') return 0; // any zero makes product zero (fast path)
        prod *= (c - '0');
        anyDigit = true;
    }
    if (!anyDigit) return 0;
    return prod;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n;
    if (!(cin >> n)) return 0;
    string s = to_string(n);
    int len = (int)s.size();
    
    // candidate: n itself
    int64 best = productOfDigits(s);
    
    // try decreasing each position i (0-indexed) and set rest to 9
    for (int i = 0; i < len; ++i) {
        if (s[i] == '0') continue; // can't decrease 0 to -1
        string cand = s;
        cand[i] = char(cand[i] - 1); // decrease this digit by 1
        for (int j = i + 1; j < len; ++j) cand[j] = '9';
        
        // remove leading zeros for product calculation (or skip them)
        int start = 0;
        while (start < (int)cand.size() && cand[start] == '0') ++start;
        string trimmed = (start < (int)cand.size()) ? cand.substr(start) : "0";
        
        int64 prod;
        if (trimmed == "0") prod = 0;
        else prod = productOfDigits(trimmed);
        best = max(best, prod);
    }
    
    cout << best << '\n';
    return 0;
}
