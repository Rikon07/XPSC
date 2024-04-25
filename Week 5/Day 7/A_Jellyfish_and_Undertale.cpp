#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pb push_back
ll solve(int a, int b, int n)
{
    vector<int> ar(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    ll sec = b-1;
    
    for(int i=0; i<n; i++)
    {
        sec = sec + min(1+ar[i], a)-1;
    }
    return ++sec;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        cout << solve(a, b, n) <<'\n';
    }
    return 0;
}
