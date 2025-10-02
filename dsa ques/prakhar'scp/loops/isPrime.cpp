#include <iostream>
using namespace std;

int main() {
    // Your code here
    int n;
    cin>>n;
    if(n==1){cout<<"Not Prime"<<endl;}
    else if(n==2||n==3){cout<<"Prime"<<endl;}
    else if(n%2==0||n%3==0){cout<<"Not Prime"<<endl;}
    else {
        for(int i=5;i*i<=n;i=i+6)
        {
            if(n%i==0||n%(i+2)==0)
            {
                cout<<"Not Prime"<<endl;
                return 0;
            }
        }
        cout<<"Prime"<<endl;
    }  
    return 0;
}