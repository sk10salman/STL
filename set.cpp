#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> s;
    while(n--)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    s.erase(5);
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
       cout<<*it<<" ";
    return 0;
}