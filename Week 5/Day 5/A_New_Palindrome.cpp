#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> s;
        int n = s.size();
        bool possible = false;
        for(int i=1; i<n/2; i++)
        {
            if(s[i] != s[i-1]){
                possible = true;
                break;
            }
        }
        (possible)?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
