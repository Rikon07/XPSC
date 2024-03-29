#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, q;
        cin >> n >> q;
        vector<int>vec(n);
        for(int i=0; i<n; i++){
            cin >> vec[i];
        }
        
        vector<long long int> PrefixSum(n);
        for(int i=0; i<n; i++)
        {
            if(i == 0){
                PrefixSum[i] = vec[i];
            }
            else{
                PrefixSum[i] += PrefixSum[i-1]+vec[i];
            }
        }
        while(q--)
        {
            int l, r, k;
            cin >> l >> r >> k;
            l--; r--;
 
            long long int sum = PrefixSum[r] - PrefixSum[l-1];
            if(l == 0) sum = PrefixSum[r];
            
            int change = k*(r-l+1);
            
            if((PrefixSum[n-1]+change-sum) % 2){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}