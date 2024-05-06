#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void DejaVu(int n, int q)
{
    vector <ll> arr(n);
    vector <ll> que(q);
    for(ll i=0; i<n; i++) cin >> arr[i];
    for(ll i=0; i<q; i++) cin >> que[i];
 
    set <ll> st;
    for(ll i=0; i<q; i++)
    {
        if(st.count(que[i])) continue;
        st.insert(que[i]);
        for(ll j=0; j<n; j++)
        {
            ll a = pow(2, que[i]);
            ll b = pow(2, que[i]-1);
            if(arr[j] % a == 0)
            {
                arr[j] += b;
            }
        }
    }
    
    for(auto x: arr){
        cout << x <<" ";
    }
    cout << "\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, q;
        cin >> n >> q;
        DejaVu(n, q);
    }
    return 0;
}
