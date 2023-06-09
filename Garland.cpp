#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int l=s.length();
        m=0;
        for(int i=0; i<4; i++)
        {
            for(int j=i+1; j<4; j++)
            {
                if(s[i]==s[j])m++;
            }
        }

        if(m==6)
        {
            cout<<"-1\n";
        }
        else if(m==3)
        {
            cout<<l+2<<endl;
        }
        else
        {
            cout<<l<<endl;
        }

    }
}
