#include <bits/stdc++.h>
using namespace std;

string add(string a, string b) {
    string result = "";
    int carry = 0;
    int i = a.size() - 1, j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result = char(sum % 10 + '0') + result;
        carry = sum / 10;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    if (n == 0 || n == 1) {
        cout << 1 << endl;
        return 0;
    }

    vector<string> dp(n + 1);
    dp[0] = "1";  // 0阶楼梯有1种走法
    dp[1] = "1";  // 1阶楼梯有1种走法

    for (int i = 2; i <= n; i++) {
        dp[i] = add(dp[i - 1], dp[i - 2]);
    }

    cout << dp[n] << endl;
    return 0;
}
