#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	int a[T];
	for(int i=0; i<T; i++)
	cin>>a[i];
	sort(a,a+T);
	if(a[T-1]==0)
	cout<<"EASY";
	else
	cout<<"HARD";
}
