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
        if(s[i] != 'm' || s[i] != 'e' || s[i] != 'o' || s[i] != 'w')
            ok = false;
        if(s[i] == 'm' && m == false && e == false && o == false && w == false)
            m = true; 
        else if(s[i] == 'e' && m == true && o == false && w == false)
            e = true;
        else if(s[i] == 'o' && m == true && e == true && w == false)
            o = true;
        else if(s[i] == 'w' && m == true && e == true && o == true)
            w = true;
    }
    cout << m <<e<<o<<w<<ok<<"\n";
    if(m && e && o && w && ok) return "YES";
    else return "NO";
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