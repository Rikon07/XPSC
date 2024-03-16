#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a, b;
  cin >> a >> b;
  
  if(abs(a-b) >= 2) cout << (max(a, b)*2)-1 <<"\n";
  else cout << a + b <<"\n";
  
  return 0;
}