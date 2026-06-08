#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    // //指针形式
    // int* p1 = &a;
    // int* p2 = &b;
    // cout << *p1+*p2 << endl;
    // //引用形式
    int &p1 = a;
    int &p2 = b;
    cout << p1+p2 << endl;
    return 0;
}
