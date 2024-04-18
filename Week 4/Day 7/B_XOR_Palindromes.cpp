#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        string s;
        cin >> n >> s;

        string ans = "";

        int goodPairs = 0, unmatched = 0;
        int l = 0, r = n-1;
        while(l < r)
        {
            if(s[l] == s[r])
            {
                goodPairs += 2;
            }
            else
            {
                unmatched++;
            }
            l++, r--;
        }

        for(int i=0; i<=n; i++)
        {
            int total = i;
            total -= unmatched;
            if(total < 0)
            {
                ans.pb('0');
                continue;
            }

            total = max((total % 2), total - goodPairs);
            total = max(0, total - (n % 2));
            if(total == 0)
            {
                ans.pb('1');
            }
            else
            {
                ans.pb('0');
            }
        }
        cout << ans << endl;
    }
    return 0;
}