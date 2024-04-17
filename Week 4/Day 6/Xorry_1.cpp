#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int x;
            cin >> x;
        int tmp = x, powe = 0;
        while(tmp > 1)
        {
            tmp /= 2;
            powe++;
        }
        int num = pow(2, powe);
        cout << x-num <<" "<< num <<"\n";
    }
    return 0;
}