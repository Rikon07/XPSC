#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int Maximi(int n)
{
    vector<int> ar(n);
    for(int &elements: ar)
        cin >> elements;

    int OR = 0,AND = -1;
    for(int i=0; i<n; i++)
    {
        OR |= ar[i];
        AND &= ar[i];
    }
    return OR-AND;
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        cout << Maximi(n) <<"\n";
    }
    return 0;
}