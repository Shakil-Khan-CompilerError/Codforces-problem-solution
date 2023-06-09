#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[2]= {0,0},k;
        cin>>n;
        while(n--)
        {
            cin>>k;
            a[k%2]+=k;
        }
        puts(*a>a[1]?"Yes":"No");
    }
}

