#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,z,ans1=0,ans2=0,ans3=0;cin>>n;
    while(n--){cin>>x>>y>>z;ans1+=x;ans2+=y;ans3+=z;}
    if(ans1==0 && ans2==0 && ans3==0)cout<<"YES";else cout<<"NO";
    return 0;
}
