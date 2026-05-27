#include<bits/stdc++.h>

using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    
    
    if (a > b) swap(a, b);
    
    if ((a + b) % 3 == 0 && a * 2 >= b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long n;
  cin >> n ;

  while(n--){
    solve();
  }
  return 0;
}
