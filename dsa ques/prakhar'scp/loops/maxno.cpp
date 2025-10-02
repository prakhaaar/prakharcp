#include<iostream>
using namespace std;    

int main()
{
    int n;
    cin>>n;
    int fmax=0;
    while(n--)
    {
        int x;
        cin>>x;
        if(x>fmax)
        {
            fmax=x;
        }
    }
    cout<<fmax<<'\n';
}