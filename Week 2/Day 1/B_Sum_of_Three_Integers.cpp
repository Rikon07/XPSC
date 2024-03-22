#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int k, s;
    cin >> k >> s;
    int satisfy = 0;
    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            int l = s-(i+j);
            //cout << i <<" "<< j <<" "<< l <<"\n";
            if((i+j+l) == s && l <= k && l>=0)
            {
                //cout << i <<" "<< j <<" "<< l <<"\n";
                satisfy++;
            }
        }
    }

    cout << satisfy <<"\n";
    return 0;
}