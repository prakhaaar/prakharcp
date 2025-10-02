/*c*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if ((a + b > 0) && (abs(a - b) <= 1)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
/*https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

 basic if else problem// + basic maths
*/