#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,s=0;
    cin>>m>>n;
    if(m>n)
        s=0;
    else
        while(m<=n)
        {
            m=m*3;
            n=n*2;
            s++;
        }
    cout<<s<<endl;
    return 0;
}
