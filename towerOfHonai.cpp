#include<bits/stdc++.h>
using namespace std;

void tOH(int n, int s, int e, int a){
  if(n<=1){
    cout << s << " " << e<<'\n';
    return;
  }
  tOH(n-1,s,a,e);
  cout << s << " " << e << '\n';
  tOH(n-1,a,e,s);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  int c;
  cin >> c;
  cout << (1UL<<c) - 1 <<'\n';
  tOH(c,1,3,2);
  return 0;
}
