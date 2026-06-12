#include<bits/stdc++.h>
using namespace std;

struct student{
    int c;
    int m;
    int e;
    int total;
    int id;
};

bool cmp(student a,student b){
    if(a.total!=b.total){return a.total > b.total;}
    else{if(a.c != b.c){return a.c > b.c;}}
    return a.id < b.id;
}

int main()
{
    int n;
    cin>>n;
    vector<student> s(n);

    for(int i = 0; i < n; i++){
        s[i].id = i+1;
        cin>>s[i].c>>s[i].m>>s[i].e;
        s[i].total = s[i].c+s[i].m+s[i].e;
    }

    sort(s.begin(),s.end(),cmp);

    for(int i = 0; i < 5; i++){
        cout << s[i].id << " " << s[i].total << "\n";
    }
    return 0;
}
