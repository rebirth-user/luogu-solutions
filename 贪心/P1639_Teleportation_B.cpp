#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,x,y,s;
    cin>>a>>b>>x>>y;

	if (abs(a-x)<=abs(a-y))
		s=abs(a-x)+abs(b-y);
	else
		s=abs(a-y)+abs(b-x);
	cout<<min(abs(a-b),s);
	return 0;


    return 0;
}
