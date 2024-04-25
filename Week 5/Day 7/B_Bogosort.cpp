#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
void Bogosort(int n)
{
    vector<int> ar(n);
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    int tmp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(ar[j] > ar[j+1])
            {
                tmp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = tmp;
            }
        }
    }
    for(int ele=n; ele>=0; ele--)
        cout << ar[ele] <<" ";
    cout <<'\n';
}
int main()
{
    int tc;
        cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;

        Bogosort(n);
    }
    return 0;
}