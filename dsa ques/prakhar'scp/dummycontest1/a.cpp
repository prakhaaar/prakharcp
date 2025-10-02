#include <bits/stdc++.h>
using namespace std;

int main() {
     int a,b;
	 cin>>a>>b;
  	 
     if(a<b){
	  swap(a,b);
	 }

	 int x=a-b;
	 if(x==1||x==0)
	 {
	   cout<<"Yes"<<'\n';
	 }
	 else if(x!=1||x!=0)
	 {
	 cout<<"No"<<'\n';
	 }

    return 0;
}

