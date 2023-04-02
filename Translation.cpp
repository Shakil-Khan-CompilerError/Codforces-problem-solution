#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()

{
    string m, n;
    cin >> m >> n;
    reverse(n.begin(), n.end());
    if (m == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
