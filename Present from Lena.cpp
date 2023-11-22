#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = -n; i <= n; i++)
    {
        for (int j = 0; j < n-abs(abs(i)-n); j++)
        {
            cout << "  ";
        }
        for (int j = -abs(abs(i)-n); j <= abs(abs(i)-n); j++)
        {
            cout << n-abs(i)-abs(j);
            if (j < abs(abs(i)-n)) cout << " ";
        }
        cout << endl;
    }
}
