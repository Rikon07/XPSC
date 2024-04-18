#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, b;
            cin >> n >> b;
        int cur = -1;

        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            if ((x & b) == b)
                cur &= x;
        }
        if(cur == b) Yes;
        else No;
    }
    return 0;
}