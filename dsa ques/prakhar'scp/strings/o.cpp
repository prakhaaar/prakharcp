#include <bits/stdc++.h>
using namespace std;

void solve() {
    
    int n;
    cin>>n;
    string s;
    cin >> s; 
    int arr[26]={0};
    for(char c:s)
    {
        if(c>='a'&&c<='z')
        {
            arr[c-'a']++;
        }
    }
    for(int i=0;i<26;++i)
    {
        while(arr[i]>0)
        {
            cout<<char(i+'a');
            arr[i]--;
        }
    }
    cout<<'\n';
}

int main() {
    solve();
    return 0;
}
