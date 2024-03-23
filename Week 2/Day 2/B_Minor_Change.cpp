#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    string s, t;
    cin >> s >> t;
    int op = 0;
    //sort(s.begin(), s.end());
    //sort(t.begin(), t.end());

    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != t[i]) op++;
    }

    cout << op <<"\n";
    return 0;
}