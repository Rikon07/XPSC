#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N = 1e6+5;
int main()
{
    int n, m;
    int JuicyWorms, worms;
    cin >> n;
    int ind = 1;
    vector<int> piles(N);
    for(int i=1; i<=n; i++)
    {
        cin >> worms;
        while(worms--)
        {
            piles[ind] = i;
            ind++;
        }
    }
    cin >> m;
    while(m--)
    {
        cin >> JuicyWorms;
        cout << piles[JuicyWorms] << "\n";
    }
    return 0;
}
