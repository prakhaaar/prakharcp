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
        int cnt=0;
        int negCnt=0;
        while(n--)
        {
            int x;
            cin>>x;
            if(x==0)cnt+=1;
            if(x<0)
            {
                negCnt++;
            }
          if(negCnt==2)
          {
              negCnt=0;
          }
    }
       cout<<cnt+(negCnt*2)<<'\n';
    }
