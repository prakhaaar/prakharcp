#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<long long> results;

    // All possible expressions:
    results.push_back((a+b)+c);
    results.push_back((a+b)-c);
    results.push_back((a+b)*c);
    results.push_back((a-b)+c);
    results.push_back((a-b)-c);
    results.push_back((a-b)*c);
    results.push_back((a*b)+c);
    results.push_back((a*b)-c);
    results.push_back((a*b)*c);

    if ((a+b)*c == d || a+(b*c) == d ||
        (a-b)*c == d || a-(b*c) == d ||
        (a*b)+c == d || a*(b+c) == d ||
        (a*b)-c == d || a*(b-c) == d ||
        (a+b)-c == d || a+(b-c) == d ||
        (a-b)+c == d || a-(b+c) == d)
    {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
/*https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

  basic math problem//
*/