#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    if (!(cin >> n)) return 0;

    const int MOD = 1000000007;
    vector<long long> dp(n + 1, 0);
    dp[1] = 1; 

    for (int i = 2; i <= n; i++) {
        long long current_sum = 0;

        for (int k = 1; k < i; k++) {
            
            long long variants = (dp[k] * dp[i - k]) % MOD;

            current_sum = (current_sum + variants) % MOD;
        }
        
        dp[i] = current_sum;

    }

    cout << dp[n] << "\n";

    return 0;
}
