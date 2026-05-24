#include<bits/stdc++.h>

using namespace std;

int main(){
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n;
  cin >> n;
  for(long long i=1;i<=n;i++){
    long long ans = (i*i*(i*i-1)/2 - 2*(i-2)*(i-1)*2);
    cout << ans << "\n";
  }
  return 0;
}
