#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int sum=0;
    for(int i=0;i<s.size();++i)
    {
        sum+=s[i]-'0';
    }
    cout<<sum<<endl;
       
}