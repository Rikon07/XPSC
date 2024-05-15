#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i=0; i<n; i++)
        {
            cin >> ar[i];
        }

        map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            for(int j=2; j*j <= ar[i]; j++)
            {
                if(ar[i] % j == 0)
                {
                    while(ar[i] % j == 0)
                    {
                        mp[j]++;
                        ar[i] /= j;
                    }
                }
            }
            if(ar[i] > 1)
            {
                mp[ar[i]]++;
            }
        }

        bool f = true;
        for(auto [x, y] : mp)
        {
            if(y % n != 0)
            {
                f = false;
                break;
            }
        }

        if(f)
        {
            cout << "YES" <<'\n';
        }
        else
        {
            cout << "NO" <<'\n';
        }
    }

    return 0;
}
