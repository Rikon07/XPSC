#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    long long int n;
    while(t--)
    {
        cin >> n;
        long long int sum=0;
        while(n != 0)
        {
            sum += n;
            n /= 2;
        }
        cout << sum << "\n";
    }
    return 0;
}
