#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long y, x;
        cin >> y >> x;

        long long m = max(y, x);
        long long ans;

        if (m % 2 == 0) {
            if (y == m) {
                ans = m * m - (x - 1);
            } else {
                ans = (m - 1) * (m - 1) + y;
            }
        } else {
            if (x == m) {
                ans = m * m - (y - 1);
            } else {
                ans = (m - 1) * (m - 1) + x;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

