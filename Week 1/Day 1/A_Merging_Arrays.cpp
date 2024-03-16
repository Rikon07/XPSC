#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    multiset<int> st;
    for(int i=0; i<n; i++){
        cin >> a[i];
        st.insert(a[i]);
    }
    for(int i=0; i<m; i++){
        cin >> b[i];
        st.insert(b[i]);
    }

    for(auto it: st){
        cout << it <<" ";
    }
    cout <<"\n";
    return 0;
}