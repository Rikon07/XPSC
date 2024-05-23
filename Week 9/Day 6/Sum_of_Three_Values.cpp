#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int n, x;
        cin >> n >> x;
    vector<pair<int, int>> ar(n);

    for (int i=0; i<n; i++)
    {
        cin >> ar[i].first;
        ar[i].second = i+1;
    }

    sort(ar.begin(), ar.end());

    for(int i=0; i<n; i++)
    {
        int target = x-ar[i].first;
        int l = i+1;
        int r = n-1;

        while(l < r)
        {
            int sum = ar[l].first + ar[r].first;
            if(sum == target)
            {
                cout << ar[l].second <<" "<< ar[r].second <<" "<< ar[i].second <<'\n';
                return 0;
            }
            else if(sum < target)
            {
                ++l;
            }
            else
            {
                --r;
            }
        }
    }

    cout << "IMPOSSIBLE" <<'\n';
    return 0;
}