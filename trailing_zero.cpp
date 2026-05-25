#include<bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n;
  cin>>n;
  long long i = 0;
  while(n>0){
    i+=n/5;
    n/=5;
  }
  cout<<i;
  return 0;
}
