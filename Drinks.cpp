#include <bits/stdc++.h>
using namespace std;

main()
{
    int i,n,t;
    double s;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>t;
        s=s+t;
    }
    cout<<(double)s/n;
}
