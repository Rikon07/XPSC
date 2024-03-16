#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    
    for(int &elements: a)
    {
        cin >> elements;
    }
    for(int &elements: b)
    {
        cin >> elements;
    }

    int l=0, r=0;
    ll ans=0;
    while(l < n && r < m)
    {
        int sama = 0, samb = 0, curr = a[l];
        while(a[l] == curr && l<n)
        {
            sama++;
            l++;
        }
        while(b[r] < curr && r < m)
        {
            r++;
        }
        while(b[r] == curr && r<m)
        {
            samb++;
            r++;
        }
        ans += (1LL*sama*samb);
    }
    cout << ans <<"\n";
    return 0;
}