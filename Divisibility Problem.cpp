#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int m,n;
        cin>>m>>n;
        cout<<((n-m%n)%n)<<endl;
    }
}
