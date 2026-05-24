#include<bits/stdc++.h>

using namespace std;

void solve(int n, vector<int>& solution, bool& isSol, vector<bool>& visited){
  if(solution.size() == n){
    isSol = true;
    return;
  }
  
  for(int step = 0; step < 2; step++) {
    int start = (step == 0) ? 2 : 1; 
    
    for(int i = start; i <= n; i += 2){
      if(isSol) return;
      if(visited[i]) continue;
      if(solution.size() > 0 && abs(solution.back() - i) == 1) continue;
      
      visited[i] = true;
      solution.push_back(i);
      
      solve(n, solution, isSol, visited);
      
      if(isSol) return;
      visited[i] = false;
      solution.pop_back();
    }
  }
}

int main(){ 
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  
  if(n == 1){
    cout << 1;
    return 0;
  } else if (n <= 3) { 
    cout << "NO SOLUTION";
    return 0;
  }
  
  vector<int> solution;
  bool isSol = false;
  vector<bool> visited(n + 1, false);
  solve(n, solution, isSol, visited);
  
  if(!isSol){
    cout << "NO SOLUTION";
    return 0;
  }
  
  for(int i = 0; i < solution.size(); i++){
    cout << solution[i];
    if(i != solution.size() - 1) cout << " ";
  }
  
  return 0;
}

