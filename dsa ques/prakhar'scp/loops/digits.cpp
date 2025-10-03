#include<iostream>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        while(n!=0)
        {
            int ld=n%10;
            n/=10;
            cout<<ld<<" " ;
        }
        cout<<'\n';
    }
}