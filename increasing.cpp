#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void){
  ll n;
  cin>>n;
  vector<int> v(n);
  for(auto &i : v){
    cin >> i;
  }
  cin.get();
  ll ans = 0;
  for(int i=1;i<v.size();i++){
    if(v[i]<v[i-1]){
      ans+= v[i-1] - v[i];
      v[i] += v[i-1] - v[i];
    }
  }
  cout<<ans;
  cin.get();
  return 0;
}
