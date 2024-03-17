#include<bits/stdc++.h>
using namespace std;

void word_game(int n)
{
    map <string, int> mp;
    vector <string> v[3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            string x;
            cin >> x;
            v[i].push_back(x);
            mp[x]++;
        }
    }
    int point[3] = {0};
    for(int i=0; i<3; i++)
    {
        int cnt = 0;
        for(auto it: v[i])
        {
            if(mp[it] == 1)
            {
                cnt += 3;
            }
            else if(mp[it] == 2)
            {
                cnt++;
            }
        }
        point[i] = cnt;
    }
    for(auto it: point){
        cout << it << " ";
    }
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin >> test;
    while(test--)
    {
        int N;
        cin >> N;
        word_game(N);
    }
    return 0;
}