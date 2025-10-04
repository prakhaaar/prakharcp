#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    while(n--)
    {
        long long x;
        cin>>x;
        sum+=x;
    }
    cout<<abs(sum)<<"\n";
    return 0;
}