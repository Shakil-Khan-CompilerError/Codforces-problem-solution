#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin>>m;
    int n[m];
    for(int i=0; i<m; i++)
    {
        cin>>n[i];
    }
    sort(n,n+m);
    for(int i=0; i<m; i++)
    {
        cout<<n[i]<<" ";
    }

    return 0;

}
