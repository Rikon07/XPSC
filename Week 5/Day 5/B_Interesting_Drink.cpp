#include<bits/stdc++.h>
using namespace std;
 
void solve(int n, int prices[])
{
    int q;
    cin >> q;
    sort(prices, prices+n);
    
    while(q--)
    {
        int coin;
        cin >> coin;
        if(coin >= prices[n-1])
        {
            cout << n << "\n";
        }
        else
        {
            auto shops = upper_bound(prices, prices+n, coin);
            cout << distance(prices, shops) << "\n";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int prices[n];
    for(int i=0; i<n; i++)
    {
        cin >> prices[i];
    }
    solve(n, prices);
    
    return 0;
}
