#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int n, q;
    cin >> n;
    vector<int> ar(n);
    for(int i=0; i<n; i++)
        cin >> ar[i];
    
    cin >> q;
    while(q--)
    {
        int x;
        cin >> x;
        auto it = lower_bound(ar.begin(), ar.end(), x);
        int lowe = *it;
        auto itt = lower_bound(ar.begin(), ar.end(), x)-ar.begin();
        auto jt = upper_bound(ar.begin(), ar.end(), x);
        int up = *jt;
        auto jtt = upper_bound(ar.begin(), ar.end(), x)-ar.begin();

        if(ar[0] == x)
                cout << 'X' <<' ';
        else if(lowe == x || lowe > x)
        {
            it--;
            lowe = *it;
            cout << lowe <<" ";
        }
        //else if(itt == n) cout << 'X' <<'\n';
        
        if(jtt == n) cout << 'X' <<'\n';
        else cout << up << '\n';
    }
    return 0;
}