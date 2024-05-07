#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	
	while(tc--)
	{
	    int n;
	    cin>>n;
	    vector<int> ar(n);
	    for(int i=0; i<n; i++)
	    {
	        cin >> ar[i];
	    }
	    
	    int diff[n];
	    
	    diff[0] = abs(ar[1] - ar[0]);
	    diff[n-1] = abs(ar[n-1] - ar[n-2]);
	  
	    for(int i=1; i<=n-2; i++)
	    {
	        int d1 = abs(ar[i+1] - ar[i]);
	        int d2 = abs(ar[i] - ar[i-1]);
	        diff[i] = max(d1, d2);
	    }
	    
	    int ans = *min_element(diff,diff+n);
	    cout << ans <<'\n';
	}
	return 0;
}
