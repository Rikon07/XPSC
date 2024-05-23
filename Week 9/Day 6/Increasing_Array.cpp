#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int n;
    cin >> n;
    vector<ll> ar(n);
   
    for(ll i=0; i<n; i++)
    {    
        cin >> ar[i];
    }
    
    ll move = 0;
    for(ll i=1; i<n; i++)
    {
        if(ar[i-1]>ar[i])
        {
            move += (ar[i-1]-ar[i]);
            ar[i] = ar[i]+(ar[i-1]-ar[i]);
        }
    }

    cout << move <<'\n';
    return 0;
}