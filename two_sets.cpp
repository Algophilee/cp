#include<bits/stdc++.h>

using namespace std;

int main(){
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n;
  cin >> n;
  long long sm = n*(n+1)/2;
  long long h = sm/2;
  if(h*2 != sm){
    cout << "NO";
    return 0;
  }
  cout<<"YES"<<"\n";
  vector<bool> v(n+1,false);
  int i = 0;
  stack<long long> s;
  for(long j = n;j>=1 & h!=0;j--){
    if(h>=j){
      i++;
      h-=j;
      v[j]=true;
      s.push(j);
    }
    if(h>0 && h<n && v[h]!=true){
      i++;
      s.push(h);
      v[h]=true;
      h=0;
    }
  }
  cout << i << "\n";
  while(!s.empty()){
    cout << s.top();
    s.pop();
    if(!s.empty()) cout<<" ";
  }
  cout<<"\n";
  cout<< n-i<<"\n";
  int k = 0;
  for(int j=1;j<=n;j++){
    if(!v[j]){
      cout<< j;
      k++;
    }
    if(!v[j] && k!=n-i) cout<<" ";
    if(k==n-i) break;
  }
  return 0;
}
