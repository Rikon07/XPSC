#include<bits/stdc++.h>
using namespace std;
 
void Decode(int n)
{
    char str[n+2];
    char code[n];
    for(int i=0; i<n; i++)
    {
        cin >> str[i];
    }
    str[n] = 'a';
    str[n+1] = 'b';
    int j=0;
    for(int i=0; i<n; i++)
    {
        //cout << i<<" " << str[i] << endl;
        if(str[i+2] != '0')
        {
            code[j] = str[i] + 48;
            j++;
        }
        else if(str[i+2] == '0' && str[i+3] == '0')
        {
            code[j] = str[i] + 48;
            j++;
        }
        else
        {
            code[j] = ((str[i]-48)*10 + (str[i+1]-48))+96;
            i += 2;
            j++;
        }
    }
    for(int i=0; i<j; i++)
    cout << code[i];
 
    cout << "\n";
}
 
int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        Decode(N);
    }
    return 0;
}
