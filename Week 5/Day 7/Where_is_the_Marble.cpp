#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int cases = 1, n, q;
    while(1)
    {
        cin >> n >> q;
        if(n == 0 && q == 0) break;
        cout << "CASE# "<< cases <<":\n";
        cases++;

        vector<int> ar(n);
        for(int i=0; i<n; i++)
            cin >> ar[i];
        sort(ar.begin(), ar.end());
        while(q--)
        {
            int x;
            cin >> x;

            auto it = lower_bound(ar.begin(), ar.end(), x);
            int val = *it;
            auto ind = lower_bound(ar.begin(), ar.end(), x)-ar.begin();
            if(val == x)
                cout << x <<" found at "<< ++ind <<'\n';
            else
                cout << x <<" not found\n";
        }
    }
    return 0;
}