/*Examples
InputCopy
20 2 5
OutputCopy
84
*/
/*
Among the numbers not greater than 20, the numbers whose sums of digits are between 2 and 5, are: 2,3,4,5,11,12,13,14 and 20.

So the answer is: 84.*/


#include<iostream>
using namespace std;
int findDig(int a)
{
    int sum=0;
    while(a!=0)
    {
        int d=a%10;
        sum+=d;
        a/=10;
    }
    return sum;
}


int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int sum=0;
    for(int i=1;i<=n;++i)
    {
        if(i<10)
        {
            if(i<=b && i>=a)
            {
                sum=sum+i;
            }
        }
       else
        {
        int x=findDig(i);
        if(x<=b && x>=a)
        {
            sum=sum+i;
            
        }
        }
    }
    cout<<sum<<"\n";
}