#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0,maxlen=1;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>=arr[i-1])
        {
            cnt++;
            maxlen=max(maxlen,cnt);
        }
        else
        {
            cnt=1;
        }
    }
    cout<<maxlen;
}
