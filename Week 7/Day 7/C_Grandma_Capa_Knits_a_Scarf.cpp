#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solve(int n)
{
    string s;
    cin >> s;

    int ers = 1e9;
    for(char c='a'; c<='z'; c++)
    {
        int l=0, r=n-1, cng=0;
        while(l<=r)
        {
            if(s[l] != s[r])
            {
                if(s[l] == c)
                {
                    l++;
                    cng++;
                }
                else if(s[r] == c)
                {
                    r--;
                    cng++;
                }
                else
                {
                    cng = 1e9;
                    break;
                }
            }
            else
            {
                l++;
                r--;
            }
        }
        ers = min(cng, ers);
    }
    if(ers == 1e9) return -1;
    else return ers;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << solve(n) <<'\n';
    }
    return 0;
}