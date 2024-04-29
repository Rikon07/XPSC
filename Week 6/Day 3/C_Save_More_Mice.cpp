#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int CatMouse(int n, int k)
{
    vector<int> ar(k);

    for(int i=0; i<k; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end(), greater<int>());
    int cat = 0, mouse = 0;
    for(int i=0; i<k; i++)
    {
        if(cat < ar[i])
        {
            cat += (n-ar[i]);
            mouse++;
        }
        else break;
    }
    return mouse;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;

        cout << CatMouse(n, k) <<'\n';
    }
    return 0;
}