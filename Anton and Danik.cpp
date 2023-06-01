#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    int cnt=0,cnnt=0;

    char s;
    for(int i=0; i<T
    ; i++)
    {
        cin>>s;
        if(s=='A')
        {
            cnt++;
        }
        else
            cnnt++;
    }
    if(cnt==cnnt)
    {
        cout<<"Friendship";
    }
    else if(cnt>cnnt)
    {
        cout<<"Anton";
    }
    else
    {
        cout<<"Danik";
    }
}

