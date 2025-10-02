#include <bits/stdc++.h>
using namespace std;
  
int main()
{
   int n;
   cin>>n;
   int f=n%10;
   int c=n/10;
   if(f%c==0||c%f==0)
   {
       cout<<"yes"<<'\n';
   }
   else{
       cout<<"no"<<'\n';
   }
}