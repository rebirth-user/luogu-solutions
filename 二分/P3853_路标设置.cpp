#include <bits/stdc++.h>
using namespace std;

int L, N, K;
vector<int> signs;

// 检查：空旷指数为 target 时，是否需要超过 K 个新路标
bool check(int target) {
    int need = 0;
    for (int i = 1; i < N; i++) {
        int dist = signs[i] - signs[i - 1];
        need += (dist - 1) / target;
        if (need > K) return false;
    }
    return need <= K;
}

int main() {
    cin >> L >> N >> K;
    signs.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> signs[i];
    }

    int left = 1, right = L;
    int ans = L;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (check(mid)) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
