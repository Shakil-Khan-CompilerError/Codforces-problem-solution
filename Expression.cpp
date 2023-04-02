#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    if(a+b+c>ans)ans=a+b+c;

    if(a*b*c>ans)ans=a*b*c;
    if((a+b)*c>ans)ans=(a+b)*c;
    if(a*(b+c)>ans)ans=a*(b+c);
    cout<<ans;
    return 0;
}
