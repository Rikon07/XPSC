#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int n, int k)
{
    vector<int> ar(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    int l = 0, r = k, subars = 0;
    while(r <= n)
    {
        bool f = false;
        for(int k=l; k<r; k++)
        {
            if(ar[k] % 2)
            {
                f = true;
                break;
            }
        }
        if(f) subars++;
        l++, r++;
    }
    return subars;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;

        cout << solve(n, k) <<"\n";
    }
    return 0;
}