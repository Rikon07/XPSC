#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string solve(int a, int b, int c)
{
    if(c < a && c < b) return "No";
    if(c == a || c == b) return "Yes";
    for(int i=0; a*i<=c; i++)
    {
        for(int j=0; j*b<=c; j++)
        {
            if((a*i+b*j) == c)
            {
                return "Yes";
            }
        }
    }
    return "No";
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << solve(a, b, c) <<"\n";
    return 0;
}