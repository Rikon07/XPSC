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

    int l=0, r=0, ans=0;
    while(r < m)
    {
        while(b[r] > a[l] && l<n)
        {
            ans++;
            l++;
        }
        cout << ans <<" ";
        r++;
    }
    cout <<"\n";
    return 0;
}