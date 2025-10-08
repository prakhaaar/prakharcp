#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
}
        sort(a.begin(),a.end());
        /*
          int an= 3 8 9 3 3 2==> 2 3 3 3 8 9==>2-3=1,3-3=0,8-9=0
        */
        int ans=INT_MIN;
        for(int i=0;i<n;i+=2)
        {
            ans=max(ans,abs(a[i]-a[i+1]));
        
        }
            cout<<ans<<'\n';
        
    }
