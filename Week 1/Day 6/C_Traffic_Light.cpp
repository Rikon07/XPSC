#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solve(int n, char c)
{
    string s;
    cin >> s;
    
    string str = "";
    str += s+s;
    
    if(c == 'g') return 0;

    vector<int> green;
    for(int i=0; i<2*n; i++)
    {
        if(str[i] == 'g') green.pb(i);
    }

    int max_ind = 0;
    for(int i=0; i<n; i++)
    {
        if(str[i] == c)
        {
            int ind = lower_bound(green.begin(), green.end(), i) - green.begin();
            max_ind = max(max_ind, green[ind]-i);
        }
    }
    return max_ind;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        char l;
        cin >> n >> l;

        cout << solve(n, l) <<'\n';
    }
    return 0;
}