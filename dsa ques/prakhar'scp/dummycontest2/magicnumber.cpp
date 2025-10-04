#include <bits/stdc++.h>
using namespace std;

void solve() {
   string s;
   cin>>s;
   bool flag=true;
   for(int i=0;i<s.size();++i)
   {
       if(s[i]!='1'&&s[i]!='4')
       {
           flag=false;
           break;
       }
   }
   if(s[0]=='4')flag=false;
   if(s.find("444")!=s.npos)flag=false;
   
   (flag)?cout<<"YES":cout<<"NO"<<'\n';
}

int main() {
    solve();
    return 0;
}
