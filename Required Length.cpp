#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()

{

    int n;

    long long x;

    cin >> n >> x;

    queue<long long> q;

    map<long long, int> dist;

    dist[x] = 0;

    q.push(x);

    while (!q.empty())

    {

        long long k = q.front();

        q.pop();

        string s = to_string(k);

        if (s.size() == n)

        {

            cout << dist[k] << endl;

            return 0;

        }

        for (char c : s)

        {

            if (c == '0')

                continue;

            long long y = k * (c - '0');

            if (!dist.count(y))

            {

                dist[y] = dist[k] + 1;

                q.push(y);

            }

        }

    }

    cout << "-1\n";

    return 0;

}
