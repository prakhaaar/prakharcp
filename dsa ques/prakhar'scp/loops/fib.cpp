#include<iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;  

    int a = 0, b = 1;

    for (int i = 0; i < n; ++i)
    {
        cout << a;
        if (i != n - 1) cout << " ";

        int next = a + b;
        a = b;
        b = next;
    }
    cout << "\n";
}

int main()
{
    solve();
    return 0;
}