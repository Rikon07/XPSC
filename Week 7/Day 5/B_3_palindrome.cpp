#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s = "";
    for(int i=0, j=0; i<n; i+=2)
    {
        if(!j)
        {
            s += "aa";
            j = 1;
        }
        else
        {
            s += "bb";
            j = 0;
        }
    }
    for(int i=0; i<n; i++)
        cout << s[i];
    
    cout <<'\n';
    return 0;
}