#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=0,min=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>a[max])max=i;
        if(a[i]<=a[min])min=i;
    }
    if(min<max)cout<<max+n-min-2;
    else cout<<max+n-min-1;
    return 0;
}
