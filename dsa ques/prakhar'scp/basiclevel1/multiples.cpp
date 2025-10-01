#include<iostream>
using namespace std;

/*Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
 * */

int main()
{
 
    int a,b;
	cin>>a>>b;
	bool flag=false;
	if(a%b==0 || b%a==0)
	{flag=true;}	
	if (flag==true){cout<<"Multiples"<<'\n';}

    if(flag==false){ cout<<"No"<<" "<<"Multiples"<<'\n';}	
 
 
}
