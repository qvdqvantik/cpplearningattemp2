#include <bits/stdc++.h>

using namespace std;

long long p[10];
vector<long long> ans_list;
int counts[10];

void solve(int digit, int need, long long sum) {
    if (need == 0) {
        if (sum <= 0) return;
        
        long long temp = sum;
        int cur_counts[10] = {0};
        
        while (temp > 0) {
            int d = temp % 10;
            if (d == 0) return;
            cur_counts[d]++;
            temp /= 10;
        }

        for (int i = 1; i <= 9; i++) {
            if (cur_counts[i] != counts[i]) return;
        }

        ans_list.push_back(sum);
        return;
    }

    for (int d = digit; d <= 9; d++) {
        counts[d]++;
        solve(d, need - 1, sum + p[d]);
        counts[d]--;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    p[0] = 0;
    for (int i = 1; i <= 9; i++) {
        long long val = 1;
        for (int j = 0; j < i; j++) val *= i;
        p[i] = val;
    }

    for (int len = 1; len <= 10; len++) {
        solve(1, len, 0);
    }

    sort(ans_list.begin(), ans_list.end());
    ans_list.erase(unique(ans_list.begin(), ans_list.end()), ans_list.end());

    long long n;
    cin >> n;

    int res = 0;
    for (long long x : ans_list) {
        if (x <= n) res++;
    }

    cout << res << "\n";

    return 0;
}