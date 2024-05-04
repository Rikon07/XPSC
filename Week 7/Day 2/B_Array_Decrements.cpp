#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define Yes cout << "YES\n"
#define No cout << "NO\n"
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<int> ar(n), br(n);
        for(int &elea: ar)
            cin >> elea;
        for(int &eleb: br)
            cin >> eleb;

        bool no = false;
        int d = -1, zdif = -1;
        for(int i=0; i<n; i++)
        {
            if(ar[i] < br[i])
            {
                no = true;
                break;
            }
            if(br[i] != 0)
            {
                if(d == -1)
                    d = ar[i] - br[i];
                else
                {
                    if(ar[i]-br[i] != d)
                    {
                        no = true;
                        break;
                    }
                }
            }
            else
            {
                zdif = max(zdif, ar[i]-br[i]);
            }
        }

        if(no)
        {
            No;
            continue;
        }
        (d ==-1 || zdif<=d)? Yes:No;
    }
    return 0;
}
