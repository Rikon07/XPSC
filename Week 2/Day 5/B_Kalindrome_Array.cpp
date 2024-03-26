#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool checkPali(vector<int> &ar, int invisible)
{
    int len = ar.size();
    int l=0, r=len-1;
    while(l<r)
    {
        if(ar[l] == invisible)
            l++;
        else if(ar[r] == invisible)
            r--;
        else if(ar[l] != ar[r])
            return false;
        else
            l++, r--;
    }
    return true;
}
string solve()
{
    int n;
    cin >> n;

    vector<int> ar(n);
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    bool kali = true;
    for(int i=0, j=n-1; i<j; i++, j--)
    {
        if(ar[i] != ar[j])
        {
            kali = (checkPali(ar, ar[i]) || checkPali(ar, ar[j]));
            break;
        }
    }

    if(kali) return "YES";
    else return "NO";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        cout << solve() << '\n';
    }
    return 0;
}