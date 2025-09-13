#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        vector<long long> a(n+1);
        vector<int> b(n+1);
        a[0] = 0; b[0] = 0;
        for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];

        long long dp0 = 0, dp1 = LLONG_MIN;
        for (int i = 1; i <= n; i++) {
            long long gap = a[i] - a[i-1];
            long long ndp0 = max(dp0, dp1 + 1) + gap - 1;
            long long ndp1 = max(dp1, dp0 + 1) + gap - 1;
            if (b[i] == 0) dp0 = ndp0, dp1 = LLONG_MIN;
            else dp1 = ndp1, dp0 = LLONG_MIN;
        }

        long long gap = m - a[n];
        long long ans = max(
            max(dp0, dp1 + 1) + gap - 1,
            max(dp1, dp0 + 1) + gap - 1
        );

        cout << ans << "\n";
    }
    return 0;
}
