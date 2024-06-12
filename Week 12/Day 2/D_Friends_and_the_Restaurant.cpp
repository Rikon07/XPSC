#include<bits/stdc++.h>
using namespace std;
const int M=1e5+5;
typedef long long ll;
ll xx[M]; ll yy[M];
ll cha[M];
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int t;
        cin >> t;
    while(t--)
    {
        int n; 
            cin >> n;
        for(int i=1;i<=n;i++)
            cin >> xx[i];
            
        for(int i=1;i<=n;i++)
        {
            cin >> yy[i];
            cha[i] = yy[i]-xx[i];
        }
        sort(cha+1,cha+1+n);
        int l=1; int r=n;
        int sum=0;

        while(l<r)
        {
            if(cha[l]+cha[r]<0)
            {
                l++;
                continue;
            }
            if(cha[l]+cha[r]>=0)
            {
                l++; r--;
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
