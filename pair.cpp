#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int ,char>p1,p2(100,'S');
    pair<int,char> p3(p2);
    p1.first=200;
    p1.second='a';
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    return 0;
}