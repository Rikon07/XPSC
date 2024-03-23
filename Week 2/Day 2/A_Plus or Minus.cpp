#include<bits/stdc++.h>
using namespace std;
 
char plus_or_minus(int a, int b, int c)
{
    if(c == a - b){
        return '-';
    }
    else if(c == a + b){
        return '+';
    }
}
 
int main()
{
    int t, A, B, C;
    cin >> t;
    while(t--)
    {
        cin >> A >> B >> C;
        char ans = plus_or_minus(A, B, C);
 
        cout << ans << "\n";
    }
    return 0;
}
