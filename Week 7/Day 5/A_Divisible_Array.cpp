#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(int n)
{
    for(int i=0, j=2; i<n; i++, j+=2)
    {
        cout << j <<" ";
    }
    cout << '\n';
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
