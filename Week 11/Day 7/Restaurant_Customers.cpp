#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int n;
        cin >> n;
    
    vector<pair<int, int>> ar;
    for(int i=0; i<n; i++)
    {
        int a, b;
            cin >> a >> b;
        ar.pb({a, 1});
        ar.pb({b, 0});
    }
    sort(ar.begin(), ar.end());
    int ans=0, res=0;

    for(int i=0; i<ar.size(); i++)
    {
        if(ar[i].second == 1)
        {
            ans++;
            res = max(res, ans);
        }
        else
        {
            ans--;
        }
    }
    cout << res <<'\n';
    return 0;
}