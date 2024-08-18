#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n;
        cin >> n;
        vector<char> s(n);
       
        for(int i=0; i<n; i++)
        {
            cin >> s[i];
        }
        
        int first_index, second_index;
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'B')
            {
                first_index = i;
                break;
            }
        }
        
        for(int i=0; i<n; i++)
        {
            if(s[i] == 'B')
            {
                second_index = i;
            }
        }
        cout << second_index - first_index+1 << endl;
    }
    return 0;
}
