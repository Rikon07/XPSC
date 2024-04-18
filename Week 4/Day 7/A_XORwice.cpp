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
        int a, b;
        cin >> a >> b;
        
        cout << (a^(a&b)+(b^(a&b))) <<'\n';
    }
    return 0;
}