#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    int k, n;
    cin >> k >> n;
    vector<int> ar(n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    cout << (sum/k) <<'\n';
    return 0;
}