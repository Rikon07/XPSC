#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define Yes cout << "YES\n"
#define No cout << "NO\n"
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        ll a, b, n, s;
        cin >> a >> b >> n >> s;

        if((a*n) < s)
        {
            if((s-(n*a))<=b) Yes;
            else No;
        }
        else
        {
            if((s-((s/n)*n))<=b) Yes;
            else No;
        }
    }
    return 0;
}