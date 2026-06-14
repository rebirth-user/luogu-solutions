#include<bits/stdc++.h>
using namespace std;

int main()
{
    int shortest=0,longest=0;
    int a,b;
    cin>>a;
    cin>>b;
    int total = a+1;
    vector<int>v(b);
    for(int i = 0; i < b; i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    int fnl_l = 0,fnl_s = 0;
    for(int i = 0; i < b; i++){
        //对于每个点所需的时间：
        //往前或回头
        if(v[i]>a/2){
            longest = v[i];
            shortest = total-v[i];
            if(fnl_l < longest) fnl_l = longest;
            if(fnl_s < shortest) fnl_s = shortest;
        }
        else{
            longest = total-v[i];
            shortest = v[i];
            if(fnl_l < longest) fnl_l = longest;
            if(fnl_s < shortest) fnl_s = shortest;
        }
    }
    cout << fnl_s << " " << fnl_l;
    return 0;
}
