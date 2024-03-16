#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  bool f = false;
  for(int i=a; i<=b; i++)
  {
    if(i % c == 0)
    {
      cout << i <<"\n";
      f = true;
      break;
    }
  }
  if(!f) cout << -1 <<"\n";
  
  
  return 0;
}