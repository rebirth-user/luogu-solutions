#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> woods;

bool canCut(int length) {
    if (length == 0) return true;
    long long count = 0;
    for (int wood : woods) {
        count += wood / length;
        if (count >= k) return true;
    }
    return false;
}

int main() {
    cin >> n >> k;
    woods.resize(n);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> woods[i];
        sum += woods[i];
    }

    int left = 0, right = sum / k;
    int ans = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (canCut(mid)) {
            ans = mid;
            left = mid + 1;  // 尝试更大的长度
        } else {
            right = mid - 1; // 减小长度
        }
    }

    cout << ans << endl;
    return 0;
}
