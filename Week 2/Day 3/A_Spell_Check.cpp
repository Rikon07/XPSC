#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(int n)
{
    string s;
        cin >> s;

    if(n != 5) return "NO";
    
    sort(s.begin(), s.end());

    if(s == "Timru")
        return "YES";
    else
        return "NO";
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