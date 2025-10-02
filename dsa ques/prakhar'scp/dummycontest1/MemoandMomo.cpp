/*https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B

 basic if else problem//
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    bool a_div = (a % k == 0);
    bool b_div = (b % k == 0);

    if (a_div && b_div) {
        cout << "Both\n";
    } else if (a_div) {
        cout << "Memo\n";
    } else if (b_div) {
        cout << "Momo\n";
    } else {
        cout << "No One\n";
    }

    return 0;
}
