#include<bits/stdc++.h>
using namespace std;

struct student{
    string name;
    int score;
    int class_score;
    char leader;
    char west;
    int numb;
    int money;
    int id;
};

bool cmp(student a,student b){
    if(a.money != b.money){return a.money > b.money;}
    return a.id < b.id;
}
int main()
{
    int n;
    cin>>n;

    vector<student> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].name >> v[i].score >> v[i].class_score >> v[i].leader >> v[i].west >> v[i].numb;
        v[i].money = 0;
        v[i].id = i;
    }

    for(int i = 0; i < n; i++){
        if(v[i].score > 80 && v[i].numb >= 1){v[i].money += 8000;}
        if(v[i].score > 85 && v[i].class_score > 80){v[i].money += 4000;}
        if(v[i].score > 90){v[i].money += 2000;}
        if(v[i].score > 85 && v[i].west == 'Y'){v[i].money += 1000;}
        if(v[i].class_score > 80 && v[i].leader == 'Y'){v[i].money += 850;}
    }

    sort(v.begin(),v.end(),cmp);

    int all = 0;
    for(int i = 0; i < n; i++){
        all += v[i].money;
    }
    cout << v[0].name << "\n" << v[0].money << "\n" << all;
    return 0;
}
