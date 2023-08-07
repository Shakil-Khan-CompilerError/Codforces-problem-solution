#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s = "codeforces";
    while(t--)
    {
        string st;
        cin>>st;
        int c = 0;
        for (int i=0; i<10; ++i)
        {
            if(st[i]!=s[i])
            c++;
        }
        cout<<c<<"\n";
    }
}

