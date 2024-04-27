#include<bits/stdc++.h>
using namespace std;
void solve(long long int n, long long int k)
{
    long ans = k + (k / (n-1));
    if(k % (n-1) == 0){
        ans--;
    }
    cout << ans << "\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        long long int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}
