#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a;
  cin >> a;
  
  if(a < 10) cout << "000" << a <<"\n";
  else if(a < 100) cout << "00" << a <<"\n";
  else if(a < 1000) cout << "0" << a <<"\n";
  else if(a < 10000) cout << a <<"\n";
  
  
  return 0;
}