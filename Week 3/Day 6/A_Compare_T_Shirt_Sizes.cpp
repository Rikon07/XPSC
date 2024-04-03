#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
char solve()
{
    string a, b;
    cin >> a >> b;

    int as = a.size(), bs = b.size();
    char maina = a[as-1], mainb = b[bs-1];

    if(a == b) return '=';

    if(maina == 'S' && mainb == 'L' || maina == 'S' && mainb == 'M' || maina == 'M' && mainb == 'L')
        return '<';
    if(maina == 'L' && mainb == 'S' || maina == 'M' && mainb == 'S' || maina == 'L' && mainb == 'M')
        return '>';
    
    int ax = 0, bx = 0;
    for(int i=0; i<as; i++)
    {
        if(a[i] == 'X') ax++;
    }
    for(int i=0; i<bs; i++)
    {
        if(b[i] == 'X') bx++;
    }

    if(ax > bx)
    {
        if(maina == 'L')
            return '>';
        else
            return '<';
    }
    else 
    {
        if(maina == 'L')
            return '<';
        else
            return '>';
    }
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        cout << solve() <<"\n";
    }
    return 0;
}