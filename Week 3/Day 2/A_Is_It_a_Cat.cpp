#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(int n)
{
    string s;
    cin >> s;
    bool m = false, e = false, o = false, w = false, ok = true;
    
    for(int i=0; i<n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = tolower(s[i]);

        if(s[i] == 'm')
        {
            if(e || o || w) return "NO";
            m = true;
        }
        else if(s[i] == 'e')
        {
            if(m == false || o || w) return "NO";
            e = true;
        }
        else if(s[i] == 'o')
        {
            if(m == false || e == false || w) return "NO";
            o = true;
        }
        else if(s[i] == 'w')
        {
            if(m == false || e == false || o == false) return "NO";
            w = true;
        }
        else
        {
            return "NO";
        }
    }
    //cout << m << e << o << w <<"\n";
    if(m == 0 || e == 0 || o == 0 || w == 0) return "NO";
    else return "YES";
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << solve(n) <<"\n";
    }
    return 0;
}
