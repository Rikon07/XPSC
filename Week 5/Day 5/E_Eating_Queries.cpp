#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int queries(int n, int q, int sum, int x, vector<int> &ar, vector<int> &pre)
{
    if(x > sum) return -1;
    if(x == sum) return n;

    int ind = lower_bound(pre.begin(), pre.end(), x)-pre.begin();
    return ind+1;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, q, sum = 0;
        cin >> n >> q;
        vector<int> ar(n), pre(n);
        for(int i=0; i<n; i++)
        {
            cin >> ar[i];
            sum += ar[i];
        }
        sort(ar.begin(), ar.end(), greater<int>());
        pre[0] = ar[0];
        for(int i=1; i<n; i++)
        {
            pre[i] = pre[i-1]+ar[i];
        }
        while(q--)
        {
            int x;
            cin >> x;

            cout << queries(n, q, sum, x, ar, pre) <<'\n';
        }
    }
    return 0;
}