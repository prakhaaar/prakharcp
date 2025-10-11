#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int x)
{
    if(x<2)return false;
    for(int i=2;i<x;++i)
    {
        if(x%i==0)return false;
    }
    return true;
}

void solve() { 
    int tt;
    cin >> tt;
    while (tt--) {
        ll d;
        cin>>d;
        ll p=d+1;
        while(!isPrime(p))p++;
        ll q=p+d;
        while(!isPrime(q))q++;
        cout<<min(p*p*p,q*p)<<'\n';
        }
    }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
