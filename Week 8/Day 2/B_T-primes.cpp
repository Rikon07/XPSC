#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
const int N = 1e6;
bool prime[N];
void Sieve_of_Eratosthinis() 
{ 
    memset(prime, false, sizeof(prime));
    for (int i=2; i<=N; i++)
    {
        if(prime[i] == false)
        {
            for(int j=2; i*j<=N; j++)
            {
                prime[i*j] = true;
            }
        }
    }
} 
int main()
{
    int n;
    cin >> n;
    vector<ll> nums(n);
    Sieve_of_Eratosthinis();
    for(ll &num: nums)
        cin >> num;
 
    for(ll i=0; i<n; i++)
    {
        ll root = sqrt(nums[i]);
        if(nums[i] == 1)
            no;
        else if(root*root==nums[i] && prime[root] == false)
            yes;
        else
            no;
    }
    return 0;
}
