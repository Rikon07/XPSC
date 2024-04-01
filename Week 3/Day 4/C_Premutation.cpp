#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void solve(int n)
{
    int ar[n][n-1];
    map<int, int> lastMp;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            cin >> ar[i][j];
            if(j == n-2)
                lastMp[ar[i][j]]++;
        }
    }
    int lastEle = 0, ind = 0;
    for(auto last: lastMp)
    {
        if(last.second > ind)
        {
            lastEle = last.first;
            ind = last.second;
        }
    }
    
    for(int i=0; i<n; i++)
    {
        bool flag = true;
        for(int j=0; j<n-1; j++)
        {
            if(ar[i][j] == lastEle)
                flag = false;
        }
        if(flag)
        {
            for(int j=0; j<n-1; j++)
            {
                cout << ar[i][j] <<" ";
            }
            cout << lastEle <<"\n";
            return;
        }
    }
    
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        solve(n);
    }
    return 0;
}