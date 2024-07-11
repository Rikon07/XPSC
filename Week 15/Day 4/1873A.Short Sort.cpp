#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string word;
        cin >> word;

            if(word[0]=='a' && word[1]=='b' && word[2] == 'c')
                cout << "YES\n";
            else if(word[0]=='a' && word[1]=='c' && word[2] == 'b')
                cout << "YES\n";
            else if(word[0]=='b' && word[1]=='a' && word[2] == 'c')
                cout << "YES\n";
            else if(word[0]=='c' && word[1]=='b' && word[2] == 'a')
                cout << "YES\n";
            else
                cout << "NO\n";
    }
    return 0;
}
