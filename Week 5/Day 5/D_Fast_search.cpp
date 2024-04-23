#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    /*for(int i=0; i<n; i++)
    {
        cout << ar[i] <<' ';
    }
    cout <<'\n';*/
    int k;
    cin >> k;
    while(k--)
    {
        int l, r;
        cin >> l >> r;

        auto it = lower_bound(ar.begin(), ar.end(), l)-ar.begin();
        //int ll = *it;
        auto it2 = upper_bound(ar.begin(), ar.end(), r)-ar.begin();
        //int rr = *it2;
        int ans = (it2-1) - it;
        //cout << ll <<" "<< rr<<" ";
        cout << ans + 1 << " ";
    }
    return 0;
}