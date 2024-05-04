#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, cnt=0;
        string s;
        cin >> n >> s;
        stack<char> st;
        for(auto it: s)
        {
            if (!st.empty() && st.top() != it)
            {
                st.pop();
                cnt++;}
            else  st.push(it);
        }
      if(cnt%2==0) cout << "Ramos";
      else cout<<"Zlatan";
      cout << '\n';
    }
}
