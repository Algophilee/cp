#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void){
  string s;
  cin>>s;
  int ans = 0;
  int c = 1;
  for(int i=1;i<s.size();i++){
    if(s[i]==s[i-1]) c++;
    else{
      ans = max(ans,c);
      c = 1;
    }
  }
  ans = max(ans,c);
  cout << ans;
  return 0;
}
