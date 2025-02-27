#include <bits/stdc++.h>

using namespace std;

const int N = 1e6;

int k, m, q, n;

int Hash[N], arr[N];

string s;

int main()

{

    ios_base::sync_with_stdio(false);

    cin.tie(0);

    cout.tie(0);

    cin >> k >> m;

    for(int i = 1; i <= k; ++i)

    {

        cin >> s;

        int sum = 0;

        for(int j = 0; j < m; ++j)

        {

            sum = (sum << 1) + (s[j] - 48);

        }

        int idx = sum % N;

        while(Hash[idx] != 0)

        {

            ++idx;

            if(idx == N)

            {

                idx = 0;

            }

        }

        Hash[idx] = i;

        arr[i] = sum;

    }

    cin >> q;

    while(q--)

    {

        int sum = 0, flag = 0;

        vector<int> ans(k + 1);

        cin >> n >> s;

        for(int j = 0; j < m - 1; ++j)

        {

            sum = (sum << 1) + (s[j] - 48);

        }

        for(int j = m - 1; j < n; ++j)

        {

            sum = (sum << 1) + (s[j] - 48);

            int idx = sum % N;

            while(Hash[idx] != 0)

            {

                if(arr[Hash[idx]] == sum)

                {

                    ans[Hash[idx]] = 1;

                    flag = 1;

                    break;

                }

                idx++;

                if(idx == N)

                {

                    idx = 0;

                }

            }

            sum -= (sum & (1 << (m - 1)));

        }

        if(flag == 0)

        {

            cout << "OK" << "\n";

            continue;

        }

        for(int i = 1; i <= k; ++i)

        {

            if(ans[i] == 1)

            {

                cout << i << " ";

            }

        }

        cout << "\n";

    }

}
