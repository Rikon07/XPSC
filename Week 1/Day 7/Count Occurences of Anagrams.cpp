class Solution{
public:
	int search(string pat, string txt) {
	    int m = txt.size();
	    
	    int ans=0;
	    
	    map<char,int>mpp;
	    for(auto it:pat)
	    mpp[it]++;
	    
	    int cnt = mpp.size();
	    int l=0,r=0;
	    int n = pat.size();
	    while(r<m)
	    {
	        if(mpp.find(txt[r])!=mpp.end())
	        {
	            mpp[txt[r]]--;
	            if(mpp[txt[r]]==0)
	            cnt--;
	        }
	        
	        
	        if(r-l+1==n)
	        {
	            if(cnt==0)
	            ans++;
	            if(mpp.find(txt[l])!=mpp.end())
	            {
	                mpp[txt[l]]++;
	                if(mpp[txt[l]]==1)
	                cnt++;
	            }
	            l++;
	        }
	        r++;
	    }
	    return ans;
	}
};