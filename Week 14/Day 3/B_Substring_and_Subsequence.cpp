#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back

int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        string a, b;
            cin >> a >> b;
        
        int n = a.size(), m = b.size(), tmp = m;
        
        for(int i=0; i<m; i++)
        {
            bool f = false;
            int r=i;
            for(int j=0; j<n; j++)
            {
                if(a[j] == b[r])
                {
                    r++;
                    if(r == m)
                    {
                        break;
                    }
                }
            }
            tmp = min(tmp, i-r+m);
        }
        
        cout << tmp+n <<'\n';
    }
    return 0;
}