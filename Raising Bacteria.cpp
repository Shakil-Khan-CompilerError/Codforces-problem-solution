#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int cnt=0;
    while(t>0)
    {
        if(t%2==1)
        {
            t--;
            cnt++;
        }
        else
        {
            t=t/2;
        }
    }
    cout<<cnt;
}
