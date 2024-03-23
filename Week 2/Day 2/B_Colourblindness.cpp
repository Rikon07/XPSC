#include<bits/stdc++.h>
using namespace std;
string solve(int n)
{
    string first, second;
    cin >> first >> second;
    bool color = true;
    for(int i=0; i<n; i++)
    {
        if(first[i] != second[i])
        {
            if(first[i]=='B' && second[i]=='G'){
                color = true;
            }
            else if(first[i]=='G' && second[i]=='B'){
                color = true;
            }
            else{
                color = false;
                break;
            }
        }
    }
    if(color) return "YES";
    else return "NO";
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        cout << solve(n)<<"\n";
    }
    return 0;
}
