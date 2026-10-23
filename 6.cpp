#include <bits/stdc++.h>
using namespace std;

int a[1000];

bool check(int l, int r) {
    for (int i = l; i < r; i++) {
        if (a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}

int main1(int l, int r) {
    if (check(l, r)) {
        return r - l + 1;
    }

    if (l == r) {
        return 1;
    }

    int m = (l + r) / 2;

    int x = main1(l, m);
    
    int y = main1(m + 1, r);

    if (x > y) {
        return x;
    }

    return y;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << main1(0, n - 1);

    return 0;
}