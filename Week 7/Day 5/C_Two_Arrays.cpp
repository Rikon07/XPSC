#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
void solve(int n)
{
    vector<int> ar(n), br(n);
    for(int &elea: ar) cin >> elea;
    for(int &eleb: br) cin >> eleb;

    sort(ar.begin(), ar.end());
    sort(br.begin(), br.end());

    bool all_same = true;
    int minDif = 101, maxDif = 0;
    for(int i=0; i<n; i++)
    {
        if(ar[i] != br[i])
        {
            all_same = false;
            maxDif = max(maxDif, br[i]-ar[i]);
            minDif = min(minDif, br[i]-ar[i]);
        }
    }
    if(all_same)
    {
        Yes;
        return;
    }
    if(maxDif == 1 && minDif == 1) Yes;
    else No;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        solve(n);
    }
    return 0;
}