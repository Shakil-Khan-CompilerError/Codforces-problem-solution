#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long T;
    cin>>T;
    int sum=0;
    while(T!=0)
    {
        if(T%10==7 || T%10==4)
        {
            sum++;
        }
        T=T/10;

    }
    if(sum==7|| sum==4)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
