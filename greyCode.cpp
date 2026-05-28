#include<bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  int n;
  cin >> n;
  vector<string> result;
  if(n<1) return 0;
  result.push_back("0");
  result.push_back("1");
  for(int i=2;i<=n;i++){
    vector<string> s(result);
    for(int j=0;j<result.size();j++){
      result[j] = "0" + result[j];
      s[j] = "1"+ s[j];
    }
    reverse(s.begin(),s.end());
    result.insert(result.end(),s.begin(),s.end());
  }
  for(int i=0;i<result.size();i++){
    cout<< result[i];
    if(i!=result.size()-1) cout<<"\n";
  }
  return 0;
}
