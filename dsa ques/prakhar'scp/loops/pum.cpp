#include<iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int cur=1;
    for(int i=1;i<=n;++i)
    {
        cout<<cur<<" "<<cur+1<<" "<<cur+2<<" "<<"PUM"<<'\n';
        cur+=4;
    }
}

int main()
{
    solve();
    return 0;
}
