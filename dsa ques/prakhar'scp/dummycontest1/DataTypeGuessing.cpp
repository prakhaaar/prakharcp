#include <bits/stdc++.h>
using namespace std;
  
int main()
{
   double n,k,a;
   cin>>n>>k>>a;
   long double ans=(n*k)/a;
   if(ans<=INT_MAX)
   {
       cout<<"Integer"<<'\n';
   }
   else if(ans>=INT_MAX && ans<=LLONG_MAX)
   {
       cout<<"LONG LONG"<<'\n';
   }
   else{
       cout<<"DOUBLE"<<'\n';
   }
}