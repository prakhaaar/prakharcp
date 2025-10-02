 //1999.
#include <iostream>
using namespace std;

int main()
{
   bool flag=false;
   while(flag==false)
   {
      int n;
      cin>>n;
      if(n==1999)
      {
        flag=true;
        cout<<"Correct"<<'\n';
        break;
      }
      else{
        cout<<"Wrong"<<'\n';   
      }
   }
}