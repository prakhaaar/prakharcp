#include <iostream>
using namespace std;

int main()
{
    int n;
    char ch;
    cin>>ch;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        for(int i=1;i<=x;++i)
        {
            cout<<ch;
        }
        cout<<'\n';
    }
}
/*Example
InputCopy
+
5
5 2 4 3 7
OutputCopy
+++++
++
++++
+++
+++++++
Note*/