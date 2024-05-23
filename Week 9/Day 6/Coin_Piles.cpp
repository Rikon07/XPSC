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
        if(a>b)
            swap(a, b);
        string ans = "";
        if(a*2<b)
        {
            ans = "NO";
        }
        else
        {
            a %= 3, b %= 3;
            if(a>b) swap(a, b);
            if((a==0 and b==0) or (a==1 and b==2))
            {
                ans = "YES";
            }
            else ans = "NO";
        }
        cout << ans <<'\n';
    }
    return 0;
}
