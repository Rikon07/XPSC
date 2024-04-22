#include<bits/stdc++.h>
using namespace std;

string queries(int n, vector<int> &ar)
{
    int target;
        cin >> target;
    int l = 0, r = n-1;
    while(l <= r)
    {
        int mid = (l+r)/2;
        //cout << ar[mid] <<" ";
        if(ar[mid] == target)
        {
            return "YES";
        }
        else if(ar[mid] < target)
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    return "NO";
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int &element: ar)
        cin >> element;
    sort(ar.begin(), ar.end());
    
    while(k--)
    {
        cout << queries(n, ar) <<'\n';
    }
    return 0;
}