#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int elevator(int a, int b, int c)
{
    if(a == 1) return 1;
    int first = (a-1);
    int second = abs(b-c)+(c-1);

    if(first == second) return 3;
    else if(first > second) return 2;
    else return 1;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        cout << elevator(a, b, c) <<'\n';
    }
    return 0;
}