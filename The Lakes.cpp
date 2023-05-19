#include <bits/stdc++.h>
#define ll long long

using namespace std;
const int MAXN = 1005;

int n, m;

int a[MAXN][MAXN];

bool vis[MAXN][MAXN];

int dfs(int i, int j)
{

    vis[i][j] = true;

    int res = a[i][j];

    if (i > 0 && a[i-1][j] && !vis[i-1][j]) res += dfs(i-1, j);

    if (i < n-1 && a[i+1][j] && !vis[i+1][j]) res += dfs(i+1, j);

    if (j > 0 && a[i][j-1] && !vis[i][j-1]) res += dfs(i, j-1);

    if (j < m-1 && a[i][j+1] && !vis[i][j+1]) res += dfs(i, j+1);

    return res;

}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        cin >> n >> m;

        for (int i = 0; i < n; i++)

            for (int j = 0; j < m; j++)
            {

                cin >> a[i][j];

                vis[i][j] = false;

            }

        int ans = 0;

        for (int i = 0; i < n; i++)

            for (int j = 0; j < m; j++)

                if (a[i][j] && !vis[i][j])

                    ans = max(ans, dfs(i, j));

        cout << ans << endl;

    }

    return 0;

}
