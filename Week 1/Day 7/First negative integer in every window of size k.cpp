vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int n, long long int k)
{
        int l=0;
        int r=0;
        vector<long long>ans;
        list<long long> lst;
            
        while(r<n)
        {
            if(A[r]<0)
            {
                lst.push_back(A[r]);
            }
            if(r-l+1<k)
                r++;
            else if((r-l+1)==k)
            {
                if(lst.size()==0)
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(lst.front());
                }
                if(A[l]<0)
                    lst.pop_front();
                l++;
                r++;
            }
        }
            return ans;                                          
 }
