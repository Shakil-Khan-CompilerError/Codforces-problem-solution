#include<bits/stdc++.h>
using namespace std;

long long s,t;
int main()
{
    cin>>s>>t;
    if(t<=(s+1)/2)cout<<2*t-1;
    else
        cout<<(t-(s+1)/2)*2;
}

