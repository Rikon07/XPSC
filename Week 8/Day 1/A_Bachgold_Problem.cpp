#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    if(n%2==0)
    {
        cout << n/2 << "\n";
        for(i=1; i<n/2; i++)
            cout << "2 ";
        cout << "2\n";
    }
    else
    {
        cout << n/2 << "\n";
        for(i=1; i<n/2; i++)
            cout << "2 ";
        cout << "3\n";
    }
    return 0;
}
