#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int cnt=0;
    int arr[t];
    for(int i=0; i<t; i++)
    {
        cin>>arr[i];
        if(arr[i]!=arr[i-1])
        {
            cnt++;
        }
    }
    cout<<cnt;
}

