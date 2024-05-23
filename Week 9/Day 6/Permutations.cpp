#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int n;
    cin >> n;
    vector<int> ar;

    int i=1, j=2;
    while(j<=n)
    {
        ar.pb(j);
        j+=2;
    }
    while(i<=n)
    {
        ar.pb(i);
        i+=2;
    }
    if(n<=3 && n!=1)
    {
        cout << "NO SOLUTION\n";
    }
    else if(n == 1)
    {
        cout << 1 <<'\n';
    }
    else
    {
        for(auto it: ar)
        {
            cout << it <<" ";
        }
        cout << '\n';
    }
    return 0;
}