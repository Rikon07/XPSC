class Solution
{
public:
    long maximumSumSubarray(int k, vector<int>& a, int n)
    {
        long long int sum = 0, maxk = 0;
        int l = 0, r = 0;
        while(r < n)
        {
            sum += a[r];
            if ((r-l+1) == k)
            {
                maxk = max(ans, sum);
                sum -= a[l];
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return maxk;
    }
};
