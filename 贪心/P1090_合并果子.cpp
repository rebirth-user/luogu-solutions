#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> minpq;
    int n,tmp;
    int ans = 0;

    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>tmp;
        minpq.push(tmp);
    }

    while(minpq.size()>1){
        int x = minpq.top(); minpq.pop();
		int y = minpq.top(); minpq.pop();
		ans += x + y;
		minpq.push(x + y);
    }
    cout << ans;
    return 0;
}
