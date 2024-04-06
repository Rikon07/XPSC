#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int tc;
   cin >> tc;
   while(tc--)
   {
       int n;
          cin >> n;
       vector<int> ar(n);
       int totalXor = 0;
       for(int i=0; i<n; i++)
       {
           cin >> ar[i];
           totalXor = totalXor^ar[i];
       }
       int minXor = totalXor;
       for(int i=0; i<n; i++)
       {
           int tmp = ar[i]^totalXor;
           if(minXor > tmp)
           {
               minXor = tmp;
           }
       }
       cout << minXor <<"\n";
   }
   return 0;
}
