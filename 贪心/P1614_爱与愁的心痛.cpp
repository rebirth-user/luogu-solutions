#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int sum = INT_MAX;
    cin>>n>>m;
    vector<int>v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    for(int i = 0; i <= n -m; i++){
        int temp = 0;
        for(int j = i; j < i+m; j++){
            temp += v[j];
        }
        if(temp < sum){sum = temp;}
    }

    cout << sum << endl;
    return 0;
}
