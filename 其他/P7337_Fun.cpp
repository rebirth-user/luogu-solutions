#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int total = 0;
    int k = 0;
    int n,m,type;
    cin >> n >> m >> type;

    vector<bool> t(n);
    vector<bool> q(n);
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        if(tmp == 1){t[i] = 1;}
    }
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        if(tmp == 1){q[i] = 1;}
    }

    for(int i = 0; i < n; i++){
        if(t[i]==1 && q[i]==1) k++;
    }
    if(k >= m){total += m;}
    else{total += k;}

    total += (n-k);
    cout << total;
    return 0;
}
