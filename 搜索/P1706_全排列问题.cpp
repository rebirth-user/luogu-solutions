#include<bits/stdc++.h>
using namespace std;

int n,a[10];
bool b[10];

void dfs(int num){
    if(num == n + 1){
        for(int i = 1; i <= n; i++){
            printf("%5d",a[i]);
        }
        printf("\n");
        return;
    }
    for(int i = 1; i <= n; i++){
        if(b[i])continue;
        b[i]=1;
        a[num] = i;
        dfs(num+1);
        b[i] = 0;
    }
}

int main()
{
    cin>>n;
    dfs(1);
    return 0;
}
