#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(int n)
{
    vector<int> ar(n+1, 0);
    for(int i=1; i<=n; i++)
        cin >> ar[i];
        
    int op = 0, k = 1;
    for(int i=1; i<=n; i++)
    {
        if(ar[i] > k)
        {
            op += ar[i]-k;
            k = op+i;
        }
        k++;
    }
    return op;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;

        cout << solve(n) <<"\n";
    }
    return 0;
}