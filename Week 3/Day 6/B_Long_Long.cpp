#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    vector <int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
 
    long long int sum = 0, moves = 0;
    bool flag = false;
 
    for(int i=0; i<n; i++)
    {
        sum += abs(arr[i]);
        if(arr[i] < 0 && flag==false)
        {
           flag = true;
           moves++;
        }
        if(arr[i] > 0)
        {
            flag = false;
        }
    }
    cout << sum <<" "<< moves <<"\n";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
