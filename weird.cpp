#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void){
  ll i ;
  cin >> i ;
  while(i!=1){
    cout << i;
    if(i%2==0) i/=2;
    else i=i*3+1;
    cout << " ";
  }
  if(i==1) cout << 1; 
  return 0;
}
