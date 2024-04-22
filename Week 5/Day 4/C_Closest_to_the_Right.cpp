#include<bits/stdc++.h>
using namespace std;

int queries(int n, vector<int> &ar)
{
    int target;
        cin >> target;
    int l = 0, r = n-1, ind = n;
    while(l <= r)
    {
        int mid = (l+r)/2;
        //cout << ar[mid] <<" ";
        if(ar[mid] < target)
        {
            l = mid+1;
        }
        else if(ar[mid] >= target)
        {
            ind = mid;
            r = mid-1;
        }
    }
    return ++ind;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int &element: ar)
        cin >> element;
    //sort(ar.begin(), ar.end());
    
    while(k--)
    {
        cout << queries(n, ar) <<'\n';
    }
    return 0;
}