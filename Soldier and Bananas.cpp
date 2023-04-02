#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int i,j,k,l,m;
    while(cin>>j>>l>>m)
    {
        int sum=0;
        for(i=1;i<=m;i++)
        {
            sum+=i*j;
        }
        int ans=sum-l;
        if(ans<0)
            ans=0;
        cout<<ans<<endl;
    }
    return 0;
}
