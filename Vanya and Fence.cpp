#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int arr[a];
    int s=0;
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
        if(arr[i]>b)
        {
            s++;
        }
    }
    cout<<a+s;
}
