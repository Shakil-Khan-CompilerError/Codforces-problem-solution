#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    while(k--){
        n%10?n--:n/=10;
    }
    // for(int i=0;i<k;i++){
    //     if(n%10==0){
    //         n/=10;
    //     }
    //     else {
    //         n--;
    //     }
    // }
    cout<<n;

    return 0;
}
