#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
            cin >> n;
        int ans = 1;
        while(ans <= n)
        {
            ans *= 2;
        }
        ans /= 2;
        cout << --ans <<"\n";
    }
    return 0;
}