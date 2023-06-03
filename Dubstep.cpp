#include<bits/stdc++.h>
using namespace std;

int main()
{
    string T;
    cin>>T;
    for(int i=0; i<T.size(); i++)
    {
        if(T[i]=='W' && T[i+1]=='U' && T[i+2]=='B')
        {
            i=i+2;
            cout<<" ";
        }
        else
        {
            cout<<T[i];
        }
    }
    return 0;
}
