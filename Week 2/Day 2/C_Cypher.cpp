#include<bits/stdc++.h>
using namespace std;
 
void cypher(int n)
{
    int wheel[n], i;
    for(i=0; i<n; i++)
    {
        cin >> wheel[i];
    }
    for(i=0; i<n; i++)
    {
        int m;
        string moves;
        cin >> m >> moves;
 
        for(int k=0; k<moves.size(); k++)
        {
            if(moves[k] == 'D')
            {
                if(wheel[i]==9)
                {
                    wheel[i] = 0;
                }
                else
                {
                    wheel[i]++;
                }
            }
            else if(moves[k] == 'U')
            {
                if(wheel[i] == 0)
                {
                    wheel[i] = 9;
                }
                else
                {
                    wheel[i]--;
                }
            }
        }
    }
    for(auto it: wheel)
        cout << it << " ";
 
    cout << "\n";
}
 
int main()
{
    int test, N;
    cin >> test;
    while(test--)
    {
        cin >> N;
        cypher(N);
    }
    return 0;
}
