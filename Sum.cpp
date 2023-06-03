#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int a,b,c;
    for(int i=0; i<T; i++)
    {
        cin>>a>>b>>c;
        if(a+b==c||a+c==b||b+c==a)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

