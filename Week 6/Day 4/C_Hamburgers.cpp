#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    string s;
    ll bc, sc, cc, bp, sp, cp, tk;
    cin >> s;
    cin >> bc >> sc >> cc;
    cin >> bp >> sp >> cp;
    cin >> tk;
    int n = s.size();

    ll b=0, sa=0, c=0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'B') b++;
        else if(s[i] == 'S') sa++;
        else if(s[i] == 'C') c++;
    }

    ll l=0, r=10e12, mid, hamburgers=0;
    while(l<=r)
    {
        mid = (l+r)/2;
        ll blagbe = max(0LL, (mid*b)-bc);
        ll slagbe = max(0LL, (mid*sa)-sc);
        ll clagbe = max(0LL, (mid*c)-cc);

        ll cost = blagbe*bp + slagbe*sp + clagbe*cp;
        if(cost > tk)
        {
            r = mid-1;
        }
        else
        {
            hamburgers = mid;
            l = mid+1;
        }
    }
    
    cout << hamburgers <<'\n';
    return 0;
}