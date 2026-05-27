#include<bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  string s;
    if (!(cin >> s)) return 0;

    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'A']++;

    int odd_count = 0;
    int odd_index = -1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            odd_count++;
            odd_index = i;
        }
    }

    if (odd_count > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string first_half = "";
    for (int i = 0; i < 26; i++) {
        first_half.append(freq[i] / 2, (char)(i + 'A'));
    }

    string result = first_half;
    if (odd_index != -1) {
        result += (char)(odd_index + 'A');
    }
    reverse(first_half.begin(), first_half.end());
    result += first_half;

    cout << result;
    return 0;
}
