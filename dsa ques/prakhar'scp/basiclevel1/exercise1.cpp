#include <bits/stdc++.h>
using namespace std;

int main()
{
    double X, P;
    cin >> X >> P;

    double x = 100 * P;
    double y = 100 - X;
    double org_price = x / y;

    cout << fixed << setprecision(2) << org_price << '\n';
    return 0;
}

