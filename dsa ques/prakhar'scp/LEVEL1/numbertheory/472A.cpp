#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;
    int n;
    cin>>n;
   //prove that if a+b=n where a and b are composite numbers;
   (n%2==0)?cout<<8<<n-9<<"\n":cout<<9<<n-9<<"\n";

    return 0;
}