#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int zero(int n)
{
    vector<int> ar(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    int x = 0;
    for(int i=0; i<n; i++)
    {
        x ^= ar[i];
    }
    for(int i=0; i<n; i++)
    {
        ar[i] ^= x;
    }
    int y = 0;
    for(int i=0; i<n; i++)
    {
        y ^= ar[i];
    }
    if(y == 0)
        return x;
    else
        return -1;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << zero(n) <<"\n";
    }
    return 0;
}