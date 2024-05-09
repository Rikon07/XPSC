#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int n, m;
    cin >> n;
    vector<int> boys, girls;
    for(int i=0; i<n; i++)
    {
        int boy; cin >> boy;
        boys.pb(boy);
    }
    cin >> m;
    for(int i=0; i<m; i++)
    {
        int girl; cin >> girl;
        girls.pb(girl);
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int pairs = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(boys[i]==girls[j] || boys[i]+1==girls[j] || boys[i]==girls[j]+1)
            {
                pairs++;
                girls[j] = -1;
                break;
            }
        }
    }

    cout << pairs <<'\n';
    return 0;
}