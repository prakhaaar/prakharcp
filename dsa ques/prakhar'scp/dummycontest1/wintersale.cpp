/*
  link==>https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A

   trick==> when paying discounted price at x% we are paying (100-x)% of original price
            so we can calculate the discounted price by multiplying original price by (100-x)/100
            and then we can multiply it by quantity to get total price

*/

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


