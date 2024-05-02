#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int solveAnd(int n)
{
    vector<int> ar(n);
    for(int &elements: ar)
        cin >> elements;

    int ans = ar[0];
    for(int i=1; i<n; i++)
    {
        ans &= ar[i];
    }
    return ans;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << solveAnd(n) <<"\n";
    }
    return 0;
}