#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
const int N = (1 << 15);
vector<ll> AllPals;
void PalNums()
{
    for(int i=0; i<N; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool isPal = true;
        for(int i=0, j=len-1; i<(len/2); i++, j--)
        {
            if(s[i] != s[j])
            {
                isPal = false;
                break;
            }
        }
        if(isPal) AllPals.pb(i);
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
        cin >> tc;
    PalNums();
    while(tc--)
    {
        int n;
        cin >> n;
        vector<ll> ar(n), cnt(N);
        //map<ll, int> mp;
        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
            cnt[ar[i]]++;
        }

        ll ans = n;
        int p = AllPals.size();

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<p; j++)
            {
                int cu = (ar[i] ^ AllPals[j]);
                ans += cnt[cu];
            }
        }

        cout << ans/2 <<"\n";
    }
    return 0;
}