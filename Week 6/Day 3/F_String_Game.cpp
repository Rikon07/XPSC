#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
bool isSubsequence(int mid, string s, string p, vector<int> ar)
{
    for(int i=0; i<=mid; i++)
    {
        s[ar[i]-1] = '.';
    }
    int i, j;
    i = j = 0;
    while(i<s.size() && j<p.size())
    {
        if(s[i] == p[j])
        {
            i++, j++;
        }
        else
        {
            i++;
        }
    }
    if(j == p.size()) return true;
    else return false;
}
int main()
{
    string s, p;
    cin >> s >> p;
    int n = s.size();
    vector<int> ar(n);
    for(int &order: ar)
        cin >> order;
    
    int l=0, r=n-1, mid;
    while(l<=r)
    {
        mid = (l+r)/2;
        if(isSubsequence(mid, s, p, ar))
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    cout << l <<'\n';
    return 0;
}