#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin>>m;
    int a,b,cnt=0;
    while(m--)
    {
        cin>>a>>b;
        if(b-a>=2)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
