#include<bits/stdc++.h>

using namespace std;

long long power(long long base, long long exp){
  long long mod = 1e9 + 7;
  long long res = 1;
  base%=mod;
  while(exp>0){
    if(exp%2==1) res = (res*base)%mod;
    base = (base*base)%mod;
    exp/=2;
  }
  return res;
}

int main(){
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n;
  if(!(cin >> n)) return 0;
  cout << power(2,n);
  return 0;
}
