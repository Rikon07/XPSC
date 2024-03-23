#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    string s;
    cin >> s;
    int moves = 0, cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == '(')
        {
            cnt--;
        }
        else
        {
            cnt++;
        }
        moves = max(cnt, moves);
    }
    return moves;
}
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int N;
        cin >> N;
        cout << solve(N) <<"\n";
    }
    return 0;
}
